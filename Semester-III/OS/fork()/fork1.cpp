#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
pid_t pid;
fork();
fork();
fork();
printf("hello pid=%d" , getpid());
return 0;
}