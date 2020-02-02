#include<stdio.h>

void main()
{
	printf("hello world");
	add();
	printf("%d", add);
}

int add()
{
	int a,b;
	a=2,b=2;
	return a+b;
}
