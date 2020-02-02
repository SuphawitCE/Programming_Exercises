#include<stdio.h>
#include<conio.h>

void main()
{
    for(int i =2;i<=12;i++)
    {
        for(int j = 1;j<=12;j++)
        {
            printf("%2d  *  %2d  = %3d\n", i,j,i*j);
        }
        printf("\n");
    }
}
