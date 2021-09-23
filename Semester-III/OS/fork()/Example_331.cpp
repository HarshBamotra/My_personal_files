#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

int main()
    {
		/* fork a child process */
	fork();
		/* fork another child process */
	fork();
		/* and fork another */
	fork();

	printf("hello pid=%d" , getpid());
 	return 0;
    }