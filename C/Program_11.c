#include<stdio.h>

/*Problem จงเขียนโปรแกรมที่รับตัวเลขจำนวนเต็มไปเรื่อยๆ จนกว่าผู้ใช้งานจะป้อนตัวเลข
0 เมื่อรับเลข 0 แล้วโปรแกรมจะแสดงผลลัพธ์คือ จำนวนตัวเลขพร้อมผลรวมตัวเลขแยกเป็น
เลขคู่ และ เลขคี่มีค่าเป็นเท่าใด*/

//input 1 2 3 4 5 6 8 0
//output Sum of 5 even numbers = 20 // คู่ 2+4+6+8 = 20
// sum of 3 odd numbers = 9 // คี่ 1+3+5 = 9

void main()
{
    int n;
    int odd_count=0,odd_sum=0;
    int even_sum=0,even_count=0;
    printf("input: ");
    scanf("%d", &n);
    do
    {
        scanf("%d",&n);

        if(n%2 == 0)
        {
            even_count++;
            even_sum+=n;
        }
        else
        {
            odd_count++;
            odd_sum+=n;
        }
        
    } while (n != 0);
    printf("Output: \n");
    printf("Sum of %d even numbers = %d \n", even_count,even_sum);
    printf("Sum of %d odd numbers = %d",odd_count,odd_sum);
}