#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 


int main()
{
	char infix[5],stack[5],ch;
	int i,c,x;
	printf("Enter infix : "); // enter data 
	scanf("%s", &infix); // String
	x =infix;
	printf("%c\n", x);
	
	for(i=0;i<5;i++){
		ch=infix[i];
		c=infix[i];
		printf("char= %c		Dec= %d	",ch,c);
		// have to compare ASCII 
		if(c>48){
			// upper than 48 is character,number
			printf("	number \n");
		}
		else
		{
			// lower than 48 is operator,symbol
			printf("	Operater \n");
		}
	}
	return 0;
}
