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

// int main(void) 
// {
//     int N;
//     scanf("%d", &N);

//     int a, b, x;

//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d %d %d", &a, &b, &x);
//         printf("%d\n", a*(x-1)+b);
//     }
// }

//13866

// int main(void)
// {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int tmp;
//     if (a > b)
//     {
//         tmp = a;
//         a = b;
//         b = tmp;
//     }
//     if (b > c)
//     {
//         tmp = b;
//         b = c;
//         c = tmp;
//     }
//     if (c > d)
//     {
//         tmp = c;
//         c = d;
//         d = tmp;
//     }
//     if (a > b)
//     {
//         tmp = a;
//         a = b;
//         b = tmp;
//     }
//     if (b > c)
//     {
//         tmp = b;
//         b = c;
//         c = tmp;
//     }
//     if (a > b)
//     {
//         tmp = a;
//         a = b;
//         b = tmp;
//     }
//     int m = (a+d)-(b+c);

//     if (m >= 0)
//     {
//         printf("%d", m);
//     }
//     else if (m < 0)
//     {
//         printf("%d", -m);
//     }
// }

//17356
// #include <math.h>

// int main(void)
// {
//     float a, b;
//     scanf("%f %f", &a, &b);

//     double m = (b-a)/400;

//     double per = pow (10, m);

//     printf("%lf",1/(1+per));
// }

//9772

// int main(void)
// {
//     float a, b;
//     a = 1;
//     b = 1;

//     while (a != 0 || b != 0)
//     {
//         scanf("%f %f", &a, &b);
//         if (a > 0 && b > 0)
//         {
//             printf("Q1\n");
//         }
//         else if (a < 0 && b > 0)
//         {
//             printf("Q2\n");
//         }
//         else if (a < 0 && b < 0)
//         {
//             printf("Q3\n");
//         }
//         else if (a > 0 && b < 0)
//         {
//             printf("Q4\n");
//         }
//         else 
//         {
//             printf("AXIS\n");
//         }
//     }
// }

//25893

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     int a, b, c;
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d %d %d", &a, &b, &c);
//         int count = 0;
        
//         if (a >= 10) count += 1;
//         if (b >= 10) count += 1;
//         if (c >= 10) count += 1;

//         printf("%d %d %d\n", a, b, c);
//         if (count == 0) printf("zilch\n");
//         if (count == 1) printf("double\n");
//         if (count == 2) printf("double-double\n");
//         if (count == 3) printf("triple-double\n");

//         printf("\n");
//     }
// }

//6359

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     int t;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &t);
//         int arr[t];

//         for (int j = 0; j < t; j++)
//         {
//             arr[j] = 0;
//         }

//         for (int j = 1; j <= t; j++)
//         {
//             for (int k = j-1; k < t; k += j)
//             {
//                 arr[k] += 1;
//             }
//         }

//         int m = 0;

//         for (int j = 0; j < t; j++)
//         {
//             if (arr[j] % 2 == 1)
//             {
//                 m += 1;
//             }
//         }

//         printf("%d\n", m);
//     }
// }

//11050

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int n = 1;
    int r = 1;
    int p = 1;
    int i;

    for (i = 2; i <= a; i++)
    {
        n *= i;
    }

    for (i = 2; i <= b; i++)
    {
        r *= i;
    }

    for (i = 2; i <= (a-b); i++)
    {
        p *= i;
    }

    printf("%d", n/(r*p));
}