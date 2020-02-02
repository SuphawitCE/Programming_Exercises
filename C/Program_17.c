#include<stdio.h>

/*การแยกตัวประกอบ เขียนโปรแกรมรับinput ตัวเลข 1 ตัว แลเวแสดงผลลัพธ์การแยกตัวประกอบ*/
//input: 64500
//output: Factoring Result: 2 x 2 x 3 x 5 x 5 x 5 x 43

int fac(int num);

void main()
{
    int num;
    int p = 2;

    scanf("%d", &num);
    while((num > 1) && (p < num))
    {
        if(num % p == 0)
        {
            num /= p;
            p = 2;
            printf("%d x ",p);
        }
        else    p++;
    }
    printf("%d\n",p);
    printf("\n\n\n\n\n\n");

    printf("%d x ", fac(64500));
}

int fac(int n)
{
    int a = 2;
    while((n > 1) && (a < n))
    {
        if(n%a == 2)
        {
            n /= a;
            a = 2;
            return a;
        }
        else    return a++;
    }
    return a;
}