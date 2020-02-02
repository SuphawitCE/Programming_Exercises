#include<stdio.h>

/*เขียนโปรแกรมรับinputเป็น string แล้วแสดงผล Caesar Cipher ของข้อมูลดังกล่าว*/
//input: It is a secret to everybody.
//output: Lw lv d vhfuhw wr hyhubergb

void main()
{
    char str[80];
    int i = 0;
    gets(str);
    //scanf("%s", str); ใช้ไม่ได้มันจะออก Lw ต้องใช้ gets แทน
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')  printf("%c", ((str[i] - 'a'+3) % 26) +'a');
        else if(str[i] >= 'A' && str[i] <= 'Z') printf("%c", ((str[i] - 'A' + 3) % 26) + 'A');
        else    printf("%c",str[i]);
        ++i;
    }
}