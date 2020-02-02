#include <stdio.h>
//http://interactivepython.org/runestone/static/thinkcspy/Functions/Functionscancallotherfunctions.html

int square(int x)
{
    int y = x * x;
    return y;
}

int sum_of_squares(int x,int y,int z)
{
    int a = square(x);
    int b = square(y);
    int c = square(z);
    return a+b+c;
}

int main()
{
    int a = -5;
    int b = 2;
    int c = 10;
    int result = sum_of_squares(a,b,c);
    printf("result = %d ", result);
    return 0;
}



