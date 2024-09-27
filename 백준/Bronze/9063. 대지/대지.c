#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int xmax = -10000;
    int xmin = 10000;
    int ymax = -10000;
    int ymin = 10000;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a > xmax) xmax = a;
        if (a < xmin) xmin = a;

        if (b > ymax) ymax = b;
        if (b < ymin) ymin = b;
    }

    printf("%d", (xmax-xmin)*(ymax-ymin));
}