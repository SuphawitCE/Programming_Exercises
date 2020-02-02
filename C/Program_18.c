#include<stdio.h>

/* จงเขียนโปรแกรมรับ input เป็นตัวเลข 2 ตัวแล้วแสดงผลลัพธ์คือค่าตัวหารร่วมมากที่สุด (หรม.) ของตัวเลขทั้งสอง gcd */
//input:
//1000 750
//1050 750
//output: 250

void solv1()
{
    int a,b;
    int p = 2;
    int gcd = 1;
    scanf("%d %d", &a,&b);
    while((p < a) && (p < b))
    {
        if( (a%p == 0) && (b%p == 0) ) // ตรวจสอบว่าหารลงตัวหรือไม่ ค่าเริ่มตั้งแต่ 2 ถ้าไม่ลงตัวให้เพิ่มทีละ 1 คือ else p++
        {
            a /= p;
            b /= p;
            gcd *= p; // นำผลมาคูณรวมกัน
            p = 2;
        }
        else    p++;
    }
    printf("%d\n",gcd);
}

void solv2() 
{
    int a,b;
    int gcd = 1;
    scanf("%d %d", &a,&b);
    int cd = 1;
    while((cd < a) && (cd < b))
    {
        cd++;
        if((a%cd == 0) && (b%cd == 0))
        {
            gcd = cd;
        }
    }
    /*for(cd = 1; (cd < a) && (cd < b);cd++ )
    {
        if((a%cd == 0) && (b%cd == 0))
        {
            gcd = cd;
        }
    }*/
    printf("%d\n",gcd);
}

void main()
{
    /*int a,b;
    int p = 2;
    int gcd = 1;
    scanf("%d %d", &a,&b);
    while((p < a) && (p < b))
    {
        if( (a%p == 0) && (b%p == 0) ) // ตรวจสอบว่าหารลงตัวหรือไม่ ค่าเริ่มตั้งแต่ 2 ถ้าไม่ลงตัวให้เพิ่มทีละ 1 คือ else p++
        {
            a /= p;
            b /= p;
            gcd *= p;
            p = 2;
        }
        else    p++;
    }
    printf("%d\n",gcd);*/
    printf("Solution 1 : \n");
    solv1();
    printf("\n\nSolution 2: \n");
    solv2();
}