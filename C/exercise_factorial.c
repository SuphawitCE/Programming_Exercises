#include<stdio.h>
// factorial 1!-10! 
void main()
{
	int n=0,temp;
	int res=1; // should be long int type
	for(int i =0;i<11;++i){
		temp = (n==0) ? 1 : n; // check if(n==0) temp=1; else temp =n;
		res = res*temp; // temp equal n 
		n++; // n increase 1
		printf(" %d!  =  %d\n", i,res); // if use long int type %d must be %ld
	}
	
	/* the ANSWER OF THIS EXERCISE 
	printf("\n\n");
	int a=0,tempf;
	long int result = 1;
	
	do{
		tempf = (a==0) ? 1: a;
		result = result*tempf;
		printf("%2d! = %ld\n", a,result);
		a++;
	} while(a<11);*/
}
