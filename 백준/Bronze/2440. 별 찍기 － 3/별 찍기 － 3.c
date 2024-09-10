#include <stdio.h>

//별찍기 3

int main(void)
{
    int n ;
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}