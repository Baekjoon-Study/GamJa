#include <stdio.h>

// 별찍기 3

// int main(void)
// {
//     int n ;
//     scanf("%d", &n);

//     for (int i = n; i > 0; i--)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// 별찍기 4

int main(void)
{
    int n ;
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
