#include<stdio.h>
//Print Pyramid using for loop
void main()
{
	int row,i,v;
	printf("Enter number of rows : ");	scanf("%d", &v);
	int u=v;
	
	for(row=1;row<=v;row++){
		for(i=1;i<u;i++){
			printf(" ");
		}
		u--;
		for(i=1;i<=2*row-1;i++){
			printf("*");
		}
		printf("\n");
	}
}
