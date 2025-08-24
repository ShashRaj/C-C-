#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};



void *routine(void *arg) {
    sleep(1); // Simulate some work
    int index = *(int*)arg;
    printf("%d\n", primes[index]); // Print a random prime number from the array
    free(arg);
    return NULL;
}
//Problem : Create 10 threads, each thread should print a prime number from the array primes.
int main(int argc, char *argv[]) {
    int i;
    pthread_t threads[10];

    for (i = 0; i < 10; i++) {
        //use of malloc to allocate memory for the index
        int* a = malloc(sizeof(int)); // Allocate memory for the index
        *a = i; // Assign the index to the allocated memory
      
        if(pthread_create(&threads[i], NULL, &routine,a) != 0) {
            perror("Failed to create thread");
        }
    }

    for (int i = 0; i < 10; i++) {
        if(pthread_join(threads[i], NULL) != 0) {
            perror("Failed to join thread");
        }
    }
    return 0;
}