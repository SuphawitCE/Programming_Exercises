#include<stdio.h>
#include<string.h>

/*เขียนโปรแกรมรับinputเป็นข้อความ แล้วโปรแกรมจะแสดงผลสรุปจำนวนตัวอักษร ตัวเลข และตัวอักขระพิเศษ*/
//input: ABCDefghij12345^&*()??
//output: 5 10 7

void main()
{
    int countchar = 0;
    int countnum = 0;
    int countother = 0;
    char str[80];
    int i = 0;
    //gets(str); // เป็นสตริงไม่ต้องใช้เครื่องหมาย & เป็นตัวเลขต้องใช้ หรือใช้ gets(str);
    scanf("%s", str);
    printf("%s", str);
    while(str[i] != '\0')
    {
        if( ((str[i] >= 'a') && (str[i] <= 'z') ) || ( (str[i] >= 'A') && (str[i] <= 'Z')) )
        {
            countchar++;
        }
        else if ( (str[i] >= '0') && (str[i] <= '9') )  countnum++;
        else    countother++;
        i++;
    }
    printf("\noutput: \n");
    printf("%d  %d  %d ",countnum,countchar,countother);

}