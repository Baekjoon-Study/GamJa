#include <stdio.h>

//4153
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int tmp;

    while (a != 0, b != 0, c != 0)
    {
        if (a > b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }

        if (b > c)
        {
            tmp = b;
            b = c;
            c = tmp;
        }

        if (a*a + b*b == c*c)
        {
            printf("right\n");
        }

        else
        {
            printf("wrong\n");
        }

        scanf("%d %d %d", &a, &b, &c);
    }

}