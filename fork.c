/* EXPT:1	12-1-20115 */ 

/* To create a new child process using fork system call.
 */

#include <stdio.h>  
#include <sys/types.h> 
#include <unistd.h>  
#include <stdlib.h>

int main()
{
   pid_t  pid;

   int x=6;
   pid=fork();
   x++;
	if(pid < 0)	/* for negative value, process creation is unsuccessful */
		{
		printf("Process creation Error");	
		exit(-1);
		}
       else if(pid == 0)	/* return value is 0 for a child process */
		{
		printf("Child Process");
		printf("\n Process ID is %d",getpid());	/* ID of parent*/
		printf("\n Value of x is %d",x);
		printf("\n Process ID of Parent is %d\n",getppid());	/*process ID of shell*/
		}

	else		/* for positive values, parent process is created */
	{
	printf("\n Parent Process");
	printf("\n Process ID is %d",getpid());
	printf("\n Value of x is %d",x);
	printf("\n Process ID of shell is %d\n",getppid());	
	}
}





/*gcc fork.c -o anyname*/

/* 5 attendence,10 understanding,5 lab copy*/

