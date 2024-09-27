#include <stdio.h>

int main(void)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x + y + z == 180)
    {
        if (x == y && x == z)
        {
            printf("Equilateral");
        }
        else if (x != y && y != z && x != z)
        {
            printf("Scalene");
        }
        else 
        {
            printf("Isosceles");
        }
    }
    else 
    {
        printf("Error");
    }
}