#include<stdio.h>
#include<ctype.h>
#include<conio.h>

// Check character and number or not

void main()
{
	char ch1, ch2;
	// input aphabetic value
	do{
		printf("\nPlease input one character => ");
		ch1 = getche();
		if(!isalpha(ch1))
		{
			printf("\nError...retry again");
		}
	}while(!isalpha(ch1));
	printf("\n\n");
	
	// input numeric value
	do{
		printf("\nPlease input one numeric => ");
		ch2 = getche();
		if(!isdigit(ch2))
		{
			printf("\nError...retry again ");
		}
	}while(!isdigit (ch2));
	printf("\n\n");
}
