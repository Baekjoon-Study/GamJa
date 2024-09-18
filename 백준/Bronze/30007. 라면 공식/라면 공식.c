#include <stdio.h>

//15740

// int main(void)
// {
//     double a, b;
//     scanf("%lf %lf", &a, &b);
//     printf("%lld", (long long int)(a+b));
// }

//27323

// int main(void)
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a*b);
// }

//4999
// #include <string.h>

// int main(void)
// {
//     char  a[1000], b[1000];
//     scanf("%s", &a);
//     scanf("%s", &b);
//     if (strlen(a) >= strlen(b))
//     {
//         printf("go");
//     }
//     else 
//     {
//         printf("no");
//     }
// }

//30007

int main(void) 
{
    int N;
    scanf("%d", &N);

    int a, b, x;

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d", &a, &b, &x);
        printf("%d\n", a*(x-1)+b);
    }
}