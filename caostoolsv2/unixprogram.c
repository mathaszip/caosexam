#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int x=1;
int status;
pid_t pid;

int main() {
    pid=fork();
    if (pid==0){
        pid=fork();
        if(pid==0) {
            x+=2;
            printf("A %d\n", x);
        }
        else {
            wait(&status);
            printf("B %d\n", x);
        }
        printf("C %d\n", x);
    }
    else {
        wait(&status);
        printf("D %d\n", x);
    }
    exit(0);
}
