#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//

void main()
{
	char command[40];
	strcpy(command, "dir/w" );
	system(command);
}
