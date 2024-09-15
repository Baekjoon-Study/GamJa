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

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     if (n == 0)
//     {
//         n = 1;
//     }

//     int s = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         s *= i;
//     }

//     printf("%d", s);
// }

//15964
// int main(void)
// {
//     long long int a, b;
//     scanf("%lld %lld", &a, &b);

//     printf("%lld", (a+b)*(a-b));
// }

//15953

int main(void){
    int n;
    scanf("%d", &n);

    int a, b;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        int s = 0;

        if (a == 1) {s += 5000000;}
        else if (2 <= a && a <= 3) {s += 3000000;}
        else if (4 <= a && a <= 6) {s += 2000000;}
        else if (7 <= a && a <= 10) {s += 500000;}
        else if (11 <= a && a <= 15) {s += 300000;}
        else if (16 <= a && a <= 21) {s += 100000;}

        if (b == 1) {s += 5120000;}
        else if (2 <= b && b <= 3) {s += 2560000;}
        else if (4 <= b && b <= 7) {s += 1280000;}
        else if (8 <= b && b <= 15) {s += 640000;}
        else if (16 <= b && b <= 31) {s += 320000;}

        printf("%d\n", s);
    }
}