#include<stdio.h>

void main()
{
	int n=1;
	printf("recursion method result\n");
	num(n);
	printf("\n\n");
	// for-loop method 
	for1();
}

int num(int n){
	if(n<51){
		printf(" %d", n);
		num(n+1);
	}
}

// function use for-loop
void for1()
{
	for(int a=1;a<=50;a++)
	{
		printf(" %d", a);
	}
}

