#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int x = 3;
void *routine1()
{

    printf("Process id1 %d!\n", getpid());
    printf("Value of x is %d\n", x);
    return NULL;
}

void *routine2()
{
    x++;
    sleep(2);
    printf("Process id2 %d!\n", getpid());
    printf("Value of x is %d\n", x);
    return NULL;
}

int main(int argc, char *argv[])
{

    pthread_t t1, t2;

    if (pthread_create(&t1, NULL, &routine1, NULL))
    {
        return 1;
    }

    if (pthread_create(&t2, NULL, &routine2, NULL))
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

    return 0;
}