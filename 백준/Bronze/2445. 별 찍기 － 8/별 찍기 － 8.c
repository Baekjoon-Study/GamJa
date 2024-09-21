#include <stdio.h> 

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        for (int i = 2 * (n-j); i > 0; i--)
        {
            printf(" ");
        }
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int j = n-1; j > 0; j--)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        for (int i = 2 * (n-j); i > 0; i--)
        {
            printf(" ");
        }
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}