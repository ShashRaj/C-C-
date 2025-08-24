#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int mails = 0;

void *routine()
{
    for( int i = 0 ; i < 10000; i++){
    mails++;

    // read mails
    // increment
    // write mails
    }
    return NULL;
}

int main(int argc, char *argv[])
{

    pthread_t t1, t2;

    if (pthread_create(&t1, NULL, &routine, NULL))
    {
        return 1;
    }

    if (pthread_create(&t2, NULL, &routine, NULL))
    {
        return 2;
    }

    if (pthread_join(t1, NULL))
    {
        return 3;
    }

    if (pthread_join(t2, NULL))
    {
        return 4;
    }
    printf("Total mails: %d\n", mails);
    // due to race condition, the total mails may not be 20000
    // it may be less than 20000
    // this is because both threads are reading and writing to the same variable without synchronization
    // which can lead -- > race condition
    // to fix this, we can use mutex locks to synchronize access to the shared variable
    return 0;
}