#include<stdio.h>

/*Input  10*/
//Output  89

int jump(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if (n == 2)    return 2;
    else
    {
        return jump(n-1) + jump(n-2);
    }
    
}

void main()
{
    int n;
    printf("Enter number of stair steps: ");
    scanf("%d", &n); //Input
    printf("\nwhen rabbit moves 1 or 2 steps in each jump, \n");
    printf("all possible jumping methods = %d\n", jump(n)); // return n reference
}
