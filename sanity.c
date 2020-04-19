#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{

	//--------------- Test for statistics update in clock ticks --------
/*	
	struct perf* performance4;
	performance4 = malloc(sizeof(struct perf));


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

		printf(1, "%s%d%s", "The process 1 id is: ", performance1->pid, "\n");
		printf(1, "%s%d%s", "The process 1 priority is: ", performance1->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 1 accumulator is: ", performance1->accumulator, "\n");
		printf(1, "%s%d%s", "The process 1 rtime is: ", performance1->rtime, "\n");
		printf(1, "%s%d%s", "The process 1 stime is: ", performance1->stime, "\n");
		printf(1, "%s%d%s", "The process 1 retime is: ", performance1->retime, "\n");

		i = 1000000;
		dummy = 0;

		while(i--)
			dummy+=i;

		if(proc_info(performance1) < 0)
			printf(1, "%s", "Error!!!\n");

		printf(1, "%s%d%s", "The process 1 id is: ", performance1->pid, "\n");
		printf(1, "%s%d%s", "The process 1 priority is: ", performance1->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 1 accumulator is: ", performance1->accumulator, "\n");
		printf(1, "%s%d%s", "The process 1 rtime is: ", performance1->rtime, "\n");
		printf(1, "%s%d%s", "The process 1 stime is: ", performance1->stime, "\n");
		printf(1, "%s%d%s", "The process 1 retime is: ", performance1->retime, "\n");

		exit(0);
	}
	else{
		wait(null);
		if(proc_info(performance4) < 0)
			printf(1, "%s", "Error!\n");
		printf(1, "%s%d%s", "The ABALE id is: ", performance4->pid, "\n");
		printf(1, "%s%d%s", "The ABALE priority is: ", performance4->ps_priority, "\n");
		printf(1, "%s%d%s", "The ABALE accumulator is: ", performance4->accumulator, "\n");
		printf(1, "%s%d%s", "The ABALE rtime is: ", performance4->rtime, "\n");
		printf(1, "%s%d%s", "The ABALE stime is: ", performance4->stime, "\n");
		printf(1, "%s%d%s", "The ABALE retime is: ", performance4->retime, "\n");
		}


	if(fork() == 0)
	{
			struct perf* performance2;
	performance2 = malloc(sizeof(struct perf));

		set_ps_priority(5);

		int i = 10000000;
		int dummy = 0;

		while(i--)
			dummy+=i;

		proc_info(performance2);

		printf(1, "%s%d%s", "The process 2 id is: ", performance2->pid, "\n");
		printf(1, "%s%d%s", "The process 2 priority is: ", performance2->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 2 accumulator is: ", performance2->accumulator, "\n");
		printf(1, "%s%d%s", "The process 2 rtime is: ", performance2->rtime, "\n");
		printf(1, "%s%d%s", "The process 2 stime is: ", performance2->stime, "\n");
		printf(1, "%s%d%s", "The process 2 retime is: ", performance2->retime, "\n");


		if(fork() == 0){

			i = 100000000;
			dummy = 0;

			while(i--)
				dummy+=i;

			printf(1, "%s", "I'm the child!!!! \n");


			exit(0);
		}
		else
			wait(null);

		proc_info(performance2);

		printf(1, "%s%d%s", "The process 2 id is: ", performance2->pid, "\n");
		printf(1, "%s%d%s", "The process 2 priority is: ", performance2->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 2 accumulator is: ", performance2->accumulator, "\n");
		printf(1, "%s%d%s", "The process 2 rtime is: ", performance2->rtime, "\n");
		printf(1, "%s%d%s", "The process 2 stime is: ", performance2->stime, "\n");
		printf(1, "%s%d%s", "The process 2 retime is: ", performance2->retime, "\n");

		exit(0);
	}
	else{
		wait(null);
		if(proc_info(performance4) < 0)
			printf(1, "%s", "Error!\n");
		printf(1, "%s%d%s", "The process 0 id is: ", performance4->pid, "\n");
		printf(1, "%s%d%s", "The process 0 priority is: ", performance4->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 0 accumulator is: ", performance4->accumulator, "\n");
		printf(1, "%s%d%s", "The process 0 rtime is: ", performance4->rtime, "\n");
		printf(1, "%s%d%s", "The process 0 stime is: ", performance4->stime, "\n");
		printf(1, "%s%d%s", "The process 0 retime is: ", performance4->retime, "\n");
		}




	if(fork() == 0)
	{



	struct perf* performance3;
	performance3 = malloc(sizeof(struct perf));

		set_ps_priority(10);

		int i = 1000000;
		int dummy = 0;

		while(i--)
			dummy+=i;

		sleep(20);

		proc_info(performance3);

		printf(1, "%s%d%s", "The process 3 id is: ", performance3->pid, "\n");
		printf(1, "%s%d%s", "The process 3 priority is: ", performance3->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 3 accumulator is: ", performance3->accumulator, "\n");
		printf(1, "%s%d%s", "The process 3 rtime is: ", performance3->rtime, "\n");
		printf(1, "%s%d%s", "The process 3 stime is: ", performance3->stime, "\n");
		printf(1, "%s%d%s", "The process 3 retime is: ", performance3->retime, "\n");

		exit(0);
	}

	else{
		wait(null);
		if(proc_info(performance4) < 0)
			printf(1, "%s", "Error!\n");
		printf(1, "%s%d%s", "The process 0 id is: ", performance4->pid, "\n");
		printf(1, "%s%d%s", "The process 0 priority is: ", performance4->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 0 accumulator is: ", performance4->accumulator, "\n");
		printf(1, "%s%d%s", "The process 0 rtime is: ", performance4->rtime, "\n");
		printf(1, "%s%d%s", "The process 0 stime is: ", performance4->stime, "\n");
		printf(1, "%s%d%s", "The process 0 retime is: ", performance4->retime, "\n");
		}



 	printf(1, "%s", "All the processes finished running!\n");
*/



	// --------- Test for set cfs priority, with dacay factor as int -----
/*
	struct perf* performance;
	performance = malloc(sizeof(struct perf));

	if(proc_info(performance) < 0)
		printf(1, "%s", "Error!\n");

	printf(1, "%s%d%s", "The process 1 id is: ", performance->pid, "\n");
	printf(1, "%s%d%s", "The process 1 priority is: ", performance->ps_priority, "\n");
	printf(1, "%s%d%s", "The process 1 accumulator is: ", performance->accumulator, "\n");
	printf(1, "%s%d%s", "The process 1 cfs priority is: ", performance->cfs_priority, "\n");
	printf(1, "%s%d%s", "The process 1 rtime is: ", performance->rtime, "\n");
	printf(1, "%s%d%s", "The process 1 stime is: ", performance->stime, "\n");
	printf(1, "%s%d%s", "The process 1 retime is: ", performance->retime, "\n");

	if(set_cfs_priority(1) < 0 || proc_info(performance) < 0)
		printf(1, "%s", "Error!\n");
	printf(1, "%s%d%s", "The process 1 cfs priority is: ", performance->cfs_priority, "\n");
	if(set_cfs_priority(2) < 0 || proc_info(performance) < 0)
		printf(1, "%s", "Error!\n");
	printf(1, "%s%d%s", "The process 1 cfs priority is: ", performance->cfs_priority, "\n");
	if(set_cfs_priority(3) < 0 || proc_info(performance) < 0)
		printf(1, "%s", "Error!\n");
	printf(1, "%s%d%s", "The process 1 cfs priority is: ", performance->cfs_priority, "\n");
	if(set_cfs_priority(4) < 0 || proc_info(performance) < 0)
		printf(1, "%s", "Error!\n");
	printf(1, "%s%d%s", "The process 1 cfs priority is: ", performance->cfs_priority, "\n");
*/


/*
	//----------  Accumulator test (by proc info) -------------

	struct perf* performance4;
	performance4 = malloc(sizeof(struct perf));


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

		printf(1, "%s%d%s", "The process 1 id is: ", performance1->pid, "\n");
		printf(1, "%s%d%s", "The process 1 priority is: ", performance1->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 1 accumulator is: ", performance1->accumulator, "\n");

		exit(0);
	}
	else{
		wait(null);
		if(proc_info(performance4) < 0)
			printf(1, "%s", "Error in proc_info for ABALE\n");
		printf(1, "%s%d%s", "The ABALE id is: ", performance4->pid, "\n");
		printf(1, "%s%d%s", "The ABALE priority is: ", performance4->ps_priority, "\n");
		printf(1, "%s%d%s", "The ABALE accumulator is: ", performance4->accumulator, "\n");
		}


	if(fork() == 0)
	{
			struct perf* performance2;
	performance2 = malloc(sizeof(struct perf));

		set_ps_priority(5);

		int i = 1000000;
		int dummy = 0;

		while(i--)
			dummy+=i;

		proc_info(performance2);

		printf(1, "%s%d%s", "The process 2 id is: ", performance2->pid, "\n");
		printf(1, "%s%d%s", "The process 2 priority is: ", performance2->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 2 accumulator is: ", performance2->accumulator, "\n");

		exit(0);
	}
	else{
		wait(null);
		if(proc_info(performance4) < 0)
			printf(1, "%s", "Error in proc_info for ABALE\n");
		printf(1, "%s%d%s", "The ABALE id is: ", performance4->pid, "\n");
		printf(1, "%s%d%s", "The ABALE priority is: ", performance4->ps_priority, "\n");
		printf(1, "%s%d%s", "The ABALE accumulator is: ", performance4->accumulator, "\n");
		}




	if(fork() == 0)
	{



	struct perf* performance3;
	performance3 = malloc(sizeof(struct perf));

		set_ps_priority(10);

		int i = 1000000;
		int dummy = 0;

		while(i--)
			dummy+=i;

		proc_info(performance3);

		printf(1, "%s%d%s", "The process 3 id is: ", performance3->pid, "\n");
		printf(1, "%s%d%s", "The process 3 priority is: ", performance3->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 3 accumulator is: ", performance3->accumulator, "\n");

		exit(0);
	}

	else{
		wait(null);
		if(proc_info(performance4) < 0)
			printf(1, "%s", "Error in proc_info for ABALE\n");
		printf(1, "%s%d%s", "The ABALE id is: ", performance4->pid, "\n");
		printf(1, "%s%d%s", "The ABALE priority is: ", performance4->ps_priority, "\n");
		printf(1, "%s%d%s", "The ABALE accumulator is: ", performance4->accumulator, "\n");
		}



 	printf(1, "%s", "All the processes finished running!\n");

*/

	exit(0);
}