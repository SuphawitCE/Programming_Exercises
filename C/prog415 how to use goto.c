#include<stdio.h>
#include<conio.h>

void main()
{
	float num1,num2;
	printf("Enter diviend = ");	scanf("%f", &num1);
	printf("Enter divisor = ");	scanf("%f",	&num2);
	
	if(num2==0){
		goto CRASH; // jump to line 17 cross line 14 or don't do 14
	}
	
	printf("Answer = %.f\n", num1/num2);
	goto EXIT;
	
	CRASH:	printf("\nDivisor canoot be zero...\n");
	
	EXIT:	printf("end of process");
}
