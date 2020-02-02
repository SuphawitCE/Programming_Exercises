#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main()
{
	int limit = 9;
	srand(time(NULL));
	for(int i = 1;i<=30;i++)
	{
		printf("%d\t", 1+(rand() % limit));
	}
	
	printf("\n\n\n");
	
	for(int j = 1; j<=30;j++)
	{
		printf("%d\t", 1+(rand() % 9 )); // random 1-9
	}
}
