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

// int main(void)
// {
//     int n ;
//     scanf("%d", &n);

//     for (int i = n; i > 0; i--)
//     {
//         for (int j = 0; j < n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = i; j > 0; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// 별 찍기 5

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < 2*i-1; j++)
//         {
//             printf("*");
//         }
//         if (i < n)
//         {
//             printf("\n");
//         }
        
//     }
// }

//2443
int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++)
        {
            printf("*");
        }
        if (i > 1)
        {
            printf("\n");
        }
        
    }
}