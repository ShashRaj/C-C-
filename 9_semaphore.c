#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

sem_t mutex;

void* thread_function(void* arg) {
    sem_wait(&mutex);                  
    sleep(1);                          
    printf("Hello from thread %d\n", *(int*)arg);
    sem_post(&mutex);                  
    free(arg);                         
    return NULL;
}

int main() {
    pthread_t th[4];

    // Initialize semaphore: mutex = 1, shared between threads within process
    sem_init(&mutex, 0, 1);
    int i;
    for (i = 0; i < 4; i++) {
        int* p = malloc(sizeof(int));

        *p = i;
        if (pthread_create(&th[i], NULL, thread_function, p) != 0) {
            perror("Failed to create thread");
            return 2;
        }
    }

    // Wait for all threads to finish
    for (int i = 0; i < 4; i++) {
        if (pthread_join(th[i], NULL) != 0) {
            perror("Failed to join thread");
            return 3;
        }
    }

    // Clean up semaphore
    sem_destroy(&mutex);

    return 0;
}
