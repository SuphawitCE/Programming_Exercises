#include<stdio.h>
// program name : 515 is sub-program
// can't run this program because it's sub program, need to run on main-program
extern char msg1[],msg2[];
extern int flag;

void DisplayMsg1()
{
	printf("\n** From function DisplayMsg1() \n");
	if(flag == 1)
	{
		printf("%s\n", msg2);
	}
	else
	{
		printf("%s\n", msg1);
	}
}

void DisplayMsg2()
{
	printf("\n** From function DisplayMsg2()\n ");
	if(flag == 1)
	{
		printf("%s\n ", msg2);
	}
	else
	{
		printf("%s\n ", msg1);
	}
}
