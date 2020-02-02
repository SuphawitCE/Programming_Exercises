#include<stdio.h>
#include<conio.h>
void main()
{
	char texts[80];
	printf("Input texts : ");
	scanf("%[^\n]", &texts);
	printf("\n%s\n", texts);
}
