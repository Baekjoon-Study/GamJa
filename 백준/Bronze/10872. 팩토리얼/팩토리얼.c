#include <stdio.h> 

//2738
// int main(void)
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int arr1[n][m];
//     int arr2[n][m];

//     int s;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arr2[i][j]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ", arr1[i][j]+ arr2[i][j]);
//         }
//         printf("\n");
//     }

// }

//10872

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n == 0)
    {
        n = 1;
    }

    int s = 1;

    for (int i = 1; i <= n; i++)
    {
        s *= i;
    }

    printf("%d", s);
}