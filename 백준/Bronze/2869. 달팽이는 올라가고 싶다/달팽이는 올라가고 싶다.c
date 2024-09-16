#include <stdio.h>

int main(void)
{
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int m = v - a;
    int n = a - b;
    int day = m / n ;
    if (day*n + a < v)
    {
        day += 1;
    }
    day += 1;

    printf("%d", day);
}