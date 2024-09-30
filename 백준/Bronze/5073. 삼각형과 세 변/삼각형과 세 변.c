#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    while (a != 0 && b != 0 && c != 0)
    {
        if ((a + b > c) && (b + c > a) && (a + c > b))
        {
            if (a == b && b == c)
            {
                printf("Equilateral\n");
            }
            else if ((a == b) || (b == c) || (a == c))
            {
                printf("Isosceles\n");
            }
            else if ((a != b) && (b != c) && (a != c))
            {
                printf("Scalene\n");
            }
        }
        else
        {
            printf("Invalid\n");
        }
        scanf("%d %d %d", &a, &b, &c);
    }
}