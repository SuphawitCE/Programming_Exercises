#include<stdio.h>

/*เขียนโปรแกรมรับตัวเลขจากคีย์บอร์ด แล้วแสดงผลเครื่องหมาย * ตามจำนวนที่ป้อน*/
//input: 5
//output: *****

void main()
{
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        printf("*");
    }
}