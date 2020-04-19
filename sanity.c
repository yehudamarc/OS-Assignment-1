#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[])
{

	printf(1, "%s", "PID\t PS_PRIORITY\t STIME\t RETIME\t RTIME\t\n");
	

	if(fork() == 0)
	{
		struct perf* performance1;
		performance1 = malloc(sizeof(struct perf));
		set_ps_priority(1);

		int i = 1000000;
		int dummy = 0;

		while(i--)
			dummy+=i;

		if(proc_info(performance1) < 0)
			printf(1, "%s", "Error!!!\n");

		printf(1, "%d\t%d\t\t%d\t%d\t%d\n", getpid(), performance1->ps_priority, performance1->stime, performance1->retime, performance1->rtime);

		exit(0);
	}
	
	// wait(null);

	if(fork() == 0)
	{
		struct perf* performance2;
		performance2 = malloc(sizeof(struct perf));
		set_ps_priority(5);

		int i = 1000000;
		int dummy = 0;

		while(i--)
			dummy+=i;

		if(proc_info(performance2) < 0)
			printf(1, "%s", "Error!!!\n");

		printf(1, "%d\t%d\t\t%d\t%d\t%d\n", getpid(), performance2->ps_priority, performance2->stime, performance2->retime, performance2->rtime);

		exit(0);
	}

	// wait(null);

	if(fork() == 0)
	{

		struct perf* performance3;
		performance3 = malloc(sizeof(struct perf));
		set_ps_priority(10);

		int i = 1000000;
		int dummy = 0;

		while(i--)
			dummy+=i;

		if(proc_info(performance3) < 0)
			printf(1, "%s", "Error!!!\n");

		printf(1, "%d\t%d\t\t%d\t%d\t%d\n", getpid(), performance3->ps_priority, performance3->stime, performance3->retime, performance3->rtime);

		exit(0);
	}


	wait(null);
	wait(null);
	wait(null);

	exit(0);
}