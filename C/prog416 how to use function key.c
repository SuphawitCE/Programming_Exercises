#include<stdio.h>
#include<conio.h>

#define ENTER	'\r'

void main()
{
	char fk1,fk2;
	printf("Test for any key and function key \n\n");
	
	while((fk1 = getch() != ENTER))
	{
		if(fk1==0){
			fk2 = getch();
			printf("%2d  %4d  =  This is a function key\n", fk1,fk2);
		}
		else{
			printf(" %c = %3d\n", fk1,fk1);
		}
	}
}
