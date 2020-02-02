#include<stdio.h>

void main()
{
	int a = 20;
	int *ptr_a = &a;
	
	printf("%p\n", ptr_a); //Address 
	printf("%d", ptr_a);
}
