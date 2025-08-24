#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int mails = 0;

pthread_mutex_t mutex;

void *routine()
{
    for (int i = 0; i < 10000; i++)
    {
        pthread_mutex_lock(&mutex);
        mails++;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main(int argc, char *argv[])
{

    pthread_t th[5];

    pthread_mutex_init(&mutex, NULL);
    // creating thereads using for loop

    for (int i = 0; i < 5; i++)
    {
        if (pthread_create(&th[i], NULL, &routine, NULL))
        {
            return 1;
        }
        printf("Thread %d created\n", i + 1);
    }

    for(int i = 0; i < 5; i++)
    {
        if (pthread_join(th[i], NULL))
        {
            return 2;
        }
        printf("Thread %d joined\n", i + 1);
    }

    pthread_mutex_destroy(&mutex);
    printf("Total mails: %d\n", mails);

    return 1;
}