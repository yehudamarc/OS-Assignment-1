#include "types.h"
#include "stat.h"
#include "user.h"

int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 

int
main(int argc, char *argv[])
{

	printf(1, "%s", "PID\t PS_PRIORITY\t STIME\t RETIME\t RTIME\t\n");
	

	if(fork() == 0)
	{
		// Initilize struct for process information
		struct perf* performance1;
		performance1 = malloc(sizeof(struct perf));
		// Setting priorities to high priority
		set_ps_priority(1);
		set_cfs_priority(1);

		int i = 1000000;
		int dummy = 0;

		// Work...
		while(i--){
			fib(4);
			dummy+=i;
		}

		// Gather info
		if(proc_info(performance1) < 0)
			printf(1, "%s", "Error!!!\n");

		// Print info
		printf(1, "%d\t%d\t\t%d\t%d\t%d\n", getpid(), performance1->ps_priority, performance1->stime, performance1->retime, performance1->rtime);

		exit(0);
	}
	
	if(fork() == 0)
	{
		// Initilize struct for process information
		struct perf* performance2;
		performance2 = malloc(sizeof(struct perf));
		// Setting priorities to Medium priority
		set_ps_priority(5);
		set_cfs_priority(2);

		int i = 1000000;
		int dummy = 0;

		// Work...
		while(i--){
			fib(4);
			dummy+=i;
		}

		if(proc_info(performance2) < 0)
			printf(1, "%s", "Error!!!\n");

		printf(1, "%d\t%d\t\t%d\t%d\t%d\n", getpid(), performance2->ps_priority, performance2->stime, performance2->retime, performance2->rtime);

		exit(0);
	}


	if(fork() == 0)
	{
		// Initilize struct for process information
		struct perf* performance3;
		performance3 = malloc(sizeof(struct perf));
		// Setting priorities to Low priority
		set_ps_priority(10);
		set_cfs_priority(3);

		int i = 1000000;
		int dummy = 0;

		// Work...
		while(i--){
			fib(4);
			dummy+=i;
		}

		if(proc_info(performance3) < 0)
			printf(1, "%s", "Error!!!\n");

		printf(1, "%d\t%d\t\t%d\t%d\t%d\n", getpid(), performance3->ps_priority, performance3->stime, performance3->retime, performance3->rtime);

		exit(0);
	}

	// wait for all 3 children
	wait(null);
	wait(null);
	wait(null);

	exit(0);
}