#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>


pthread_mutex_t mutex;
void *routine()
{
    if(pthread_mutex_trylock(&mutex) == 0) // on sucess lock : True
    {
        printf("got lock\n");
        sleep(1);
        pthread_mutex_unlock(&mutex);
        return NULL;
    }
    else
    {
        printf("could not get lock\n");
    }

    
}

int main(int argc, char *argv[])
{

    pthread_t th[5];
    pthread_mutex_init(&mutex, NULL);
    for (int i = 0; i < 5; i++)
    {
        if (pthread_create(&th[i], NULL, &routine, NULL))
        {
            perror("Failed to create thread");
        }
    }

    for(int i = 0; i < 5; i++)
    {
        if (pthread_join(th[i], NULL))
        {
            perror("Failed to join thread");
        }
    }
    pthread_mutex_destroy(&mutex);
    return 1;
}