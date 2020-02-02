#include<stdio.h>
#include<ctype.h>

void main()
{
	char ch1 = 'a';
	char ch2 = 'Z';
	// true : return not 0 , false : return 0
	
	printf("Is '%c' lowercase ? Y, (return %d)\n", ch1, islower(ch1));
	printf("Is '&c' uppwercase ? N, (return %d)\n", ch1,isupper(ch1));
	printf("\nBefore: %c, %c\n", ch1, ch2);
	ch1 = toupper(ch1);
	ch2 = tolower(ch2);
	printf("After : %c, %c\n\n", ch1,ch2);
}
