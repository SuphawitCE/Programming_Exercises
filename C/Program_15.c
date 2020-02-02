#include<stdio.h>

/*จงเขียนโปรแกรมรับ input เป็นตัวเลข 10 ตัว แล้วแสดงตัวเลขที่อยู่ระหว่างเลขคู่*/
//input: 4 6 2 3 5 8 5 2 4 8
//output: 6 5 4

void main()
{
    int n[10];
    for(int i =0;i<10;i++)
    {
        scanf("%d",&n[i]);
        printf("%d",n[i]); // ดูข้อมูลที่เก็บ
    }
    printf("\n\n\n\n");
    for(int i=1;i<9;i++)
    {
        if((n[i-1]%2 == 0) && (n[i+1]%2 == 0))
        {
            printf(" %d",n[i]);
        }
    }
}