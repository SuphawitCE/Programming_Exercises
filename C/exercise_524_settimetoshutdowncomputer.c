#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// set time to shutdown computer 

void main()
{
	char ch;
	
	printf("1. Shutdown Computer : after 20 second \n");
	printf("2. Shutdown Computer : after 1 minute \n");
	printf("3. Shutdown Computer : after 5 minute \n");
	
	printf("Your choice : ");
	scanf("%c", &ch);
	
	switch(ch)
	{
		case '1' :
			system("c:/windows/system32/shutdown -s -f -t 20");
			break;
		case '2' :
			system("c:/windows/system32/shutdown -s -f -t 60");
			break;
		case '3' :
			system("c:/windows/system32/shutdown -s -f -t 300");
			break;
		default :
			printf("Invalid choice... \n");
	}
}
