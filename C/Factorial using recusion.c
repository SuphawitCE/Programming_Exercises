#include<stdio.h>

long factorial(int);

long factorial(int n )
{
	if(n==0) return n=1; // or 1
	else	return n=(n*factorial(n-1)); // (n*factorial(n-1));
}

int main()
{
	int n;
	long f;
	
	printf("Enter an integer to find its factorial\n");	scanf("%d", &n);
	
	if(n<0)	printf("Factorial of negative integers isn't defined.\n'");
	else
		f=factorial(n);
		printf("%d!  =  %ld\n", n,f);
		
	return 0;
}

