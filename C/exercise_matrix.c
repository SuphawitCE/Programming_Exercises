#include<stdio.h>

void main()
{
	int rows; 
	printf("rows of matrix : ");	scanf("%d", &rows);
	int coloumns; 
	printf("coloumns of matrix : ");	scanf("%d", &coloumns);
	
	int matrix[rows][coloumns];
	int A[10][10];
	int B[10][10];
	int sum[10][10];
	printf("Enter the elements of first matrix : \n");
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<coloumns;j++)
		{
			printf("Enter Element A [%d,%d] : ", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter the elements of second matrix : \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<coloumns;j++)
		{
			printf("Enter Element B [%d,%d] : ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	
	printf("sum of entered matrices (ADD)");
	for(int i=0;i<coloumns;i++)
	{
		for(int j=0;j<coloumns;j++)
		{
			sum[i][j] = A[i][j] + B[i][j];
			printf("%d   ", sum[i][j]);
		}
		printf("\n");
	}
	//sum
	/*for(int i=0;i<rows;i++)
	{
		for(int j=0;j<coloumns;j++)
		{
			
			printf("|  %d  sum[%d][%d]  |", i, j);
		}
		printf("\n");
	}*/
}
