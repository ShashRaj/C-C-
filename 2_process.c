#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int main(int argc, char *argv[]) {

    int x = 2;

    int pid = fork();
    if (pid == -1) {
        perror("Fork failed");
        return 1;
    }
    if (pid == 0) {
        x++ ;
    }
    sleep(2);
    printf("Process ID is %d,%d\n", getpid(),x);

    if (pid != 0) {
        wait(NULL);
        printf("Parent process finished waiting for child.\n");
    }
    return 0;
}