#include<stdio.h>

void main() {
    int pid1;
    int pid2;
    int pid3;
    printf("Parent Id is %d a nd root id si %d \n", getpid1(), getpid1());
    pid1 = fork();

    if (pid1 == 0)
    {
        printf("Process1 id is %d and parent id is %d\n", getpid2(), getpid2());
        pid2 = fork();
    }

    if (pid2 == 0)
    {
        printf("Process2 id is %d and its parent id is %dn", getpid3(), getpid3());
        pid3 = fork();
    }

    if (pid3 == 0)
    {
        printf("Process2 id is %d and its parent id is %dn", getpid(), getpid());
       
    }
     
}