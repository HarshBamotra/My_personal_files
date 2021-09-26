 //Harsh Bamotra AC-1216
//Program to compute sum of even numbers using multithreads

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int sum=0; 				
void *runner(void *param); 		
int main(int argc, char *argv[])
    {
	int NUM_THREADS=atoi(argv[1]);

	pthread_t workers[NUM_THREADS]; 	
	pthread_attr_t attr; 			
	if (argc != 2) 
		{
			fprintf(stderr,"usage: a.out <integer value>\n");
			return -1;
		}
	if (atoi(argv[1]) < 0) 
		{
			fprintf(stderr,"%d must be >= 0\n",atoi(argv[1]));
			return -1;
		}
				
	pthread_attr_init(&attr);
					
	for (int i = 0; i < NUM_THREADS; i++)
		{
			pthread_create(&workers[i],&attr,runner,argv[1]);
			pthread_join(workers[i], NULL);
		}

	printf("sum = %d\n",sum);
    }

void *runner(void *param)
	{
		int i , n , upper = atoi(param);
		printf("Enter the number ::");
		scanf("%d", &n);
		if(n%2==0)
			sum += n;
		pthread_exit(0);
	}