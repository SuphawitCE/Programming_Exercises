#include<stdio.h>

/*เขียนโปรแกรมรับอินพุตเป็นตัวเลข 10 ตัวแล้วแสดงผลลัพธ์เป็นตัวเลขที่เรียงลำดับจาก น้อยไปมาก*/
// Input: 4, 5, 3, 6, 2, 1, 7, 9, 0, 8

/*การสลับข้อมูลระหว่าง a กับ b โดยใช้ตัวแปรเพิ่มเติม 1 ตัว เช่น ตัวแปรชื่อtemp แล้วใช้โค้ด
temp = a;
a = b;
b = temp;*/

//int process(int )

//วิธี compile,run พิมใน terminal เลือก cmd  gcc -g ชื่อไฟล์.c -o ชื่อไฟล์.c.exe
/* .\ชื่อไฟล์.c.exe  */
void main()
{
    int temp;
    int arr[10];
    for(int i=0;i<sizeof(arr);i++)
    {
        //printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
    for(int i=9;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Result : ");
    for(int k = 0;k<10;k++)
    {
         printf(" %d", arr[k]);
    }
    printf("\n");
}