#include<stdio.h>
#include "exercise_515sub-program_ex514.c" // include subprogram name
// #include "file sub program name .c or .cpp"
// for example #include "sorting.cpp"
//main program of 515


char msg1[] = "Error input value, please try again";
char msg2[] = "Successful...";
int flag = 1; // true =1 , false = 0

void proc1(void); //function prototype

void main()
{
	printf("\n** From function main()\n");
	if(flag == 1)
	{
		printf("%s\n ", msg2);
	}
	else
	{
		printf("%s\n ", msg1);
	}
	flag = 0;
	proc1();
	flag = 1;
	DisplayMsg1(); // call sub-program
	flag = 2;
	DisplayMsg2(); // sub-program name : exercise_515sub-program_ex514.c
	putchar('\n');
}

void proc1()
{
	printf("\n** From function proc1()\n");
	if(flag == 1)
	{
		printf("%s\n ", msg2);
	}
	else
	{
		printf("%s\n ", msg1);
	}
}


