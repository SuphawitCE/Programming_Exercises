#include<stdio.h>

void main()
{
	int i,j;
	printf("  Odd number		Even number \n");
	printf("====================================================\n");
	for(i=1;i<=50;i++)
	{
		if(i%2==1)	printf("	%d	",i);
		if(i%2==0)	printf("	%d\n",i);
	}
}
