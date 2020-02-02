#include <stdio.h>

int main()
{
    int sum=0;
    printf("\tprocessing of i and j \n");
    for(int i=0;i<5;i++)
    {
        sum=sum+i;
        for(int j =0;j<5;j++)
        {
            sum=sum+j; // sum of j
            printf("\ti:%d , j:%d \n", i,j);
        }
        printf("\tsum of j = %d remainder i",sum); // sum of j , add i
    }
    printf("\t\n%d",sum);

    return 0;
}

