#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	

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

		if(proc_info(performance1) == 9)
			printf(1, "%s", "Error!!!\n");

		printf(1, "%s%d%s", "The process 1 priority is: ", performance1->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 1 accumulator is: ", performance1->rtime, "\n");

		exit(0);
	}
	else{
		wait(null);
		printf(1, "%s%d%s", "The ABALE priority is: ", performance4->ps_priority, "\n");
		printf(1, "%s%d%s", "The ABALE accumulator is: ", performance4->rtime, "\n");
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

		printf(1, "%s%d%s", "The process 2 priority is: ", performance2->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 2 accumulator is: ", performance2->rtime, "\n");

		exit(0);
	}
	else{
		wait(null);
		printf(1, "%s%d%s", "The ABALE priority is: ", performance4->ps_priority, "\n");
		printf(1, "%s%d%s", "The ABALE accumulator is: ", performance4->rtime, "\n");
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


		printf(1, "%s%d%s", "The process 3 priority is: ", performance3->ps_priority, "\n");
		printf(1, "%s%d%s", "The process 3 accumulator is: ", performance3->rtime, "\n");

		exit(0);
	}

	else{
		wait(null);
		printf(1, "%s%d%s", "The ABALE priority is: ", performance4->ps_priority, "\n");
		printf(1, "%s%d%s", "The ABALE accumulator is: ", performance4->rtime, "\n");
		}



 	printf(1, "%s", "All the processes finished running!\n");

	exit(0);
}