#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

void *rolldice() {

    int value = (rand() % 6) + 1; // Simulating a dice roll
    //printf("Thread rolled a dice and got: %d\n", value);
    int* result = malloc(sizeof(int)); // Allocate memory for the result
    printf("function Thread %p\n", result);
    *result = value;
    return (void*)result; // Return the pointer to the allocated memory
}
int main(int argc, char *argv[]) {
    pthread_t t1;
    int* res;
    srand(time(NULL)); // Seed the random number generator
    if(pthread_create(&t1, NULL, &rolldice, NULL) != 0) {
        return 1;
    }

    if(pthread_join(t1, (void**) &res) != 0) {
        return 2;
    }
    printf("Main Thread %p\n", res);
    printf("Value returned: %d\n", *res);
    
    free(res); // Free the allocated memory
    return 0;
}
