#include "types.h"
#include "stat.h"
#include "user.h"


void changePolicy(int num){
	int new_pol;
	new_pol = policy(num);

	printf(1, "%s%d%s", "New policy is: ", new_pol ,"\n");
}


int
main(int argc, char *argv[])
{

	
	if (strcmp(argv[1], "0") == 0)
	{
		changePolicy(0);
		printf(1, "%s", "Policy has been successfully changed to Default Policy\n");
	}
	else if (strcmp(argv[1], "1") == 0)
	{
		changePolicy(1);
		printf(1, "%s", "Policy has been successfully changed to Priority Policy\n");
	}
	else if (strcmp(argv[1], "2") == 0)
	{
		changePolicy(2);
		printf(1, "%s", "Policy has been successfully changed to CFS Policy\n");
	}
	else
	{
		printf(1, "%s%s%s", "Error replacing policy, no such a policy number (", argv[1] , ")\n");
	}

  exit(0);
}

