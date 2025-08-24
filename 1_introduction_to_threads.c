#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* routine()
{
    printf("Hello from thread!\n");
    sleep(3);
    printf("Thread finished work!\n");
    return NULL;
}


int main(int argc, char *argv[]) {

    pthread_t t1,t2;

    //initialize the thread

    if (pthread_create(&t1, NULL, &routine, NULL) != 0 )
    {
        return 1;
    }

    if (pthread_create(&t2, NULL, &routine, NULL) != 0 )
    {
        return 1;
    }
    
    //wait for the thread to finish
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

   return 0;
}