
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int digits(double x)
{
    long long int z;
    int y = 0;
    while (x > 10)
    {
        z = x / 10;
        y += x - (z * 10);
        x /= 10;
    }
    y += x;
    return y;
}
double factorial(int x)
{
   long double y=1;
    while (x>1)
    {
        y *= x;
        x--;
    }
    return y;
}
int main()
{
    int a;
    double b;
    printf("the sum of the digits of the number(!) ");
    scanf("%d", &a);
    b = factorial(a);
    printf("%d! = %.0f\n", a,b);
    printf("the sum of the digits is %d", digits(b));
    return 0;
}