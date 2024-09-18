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
#include <math.h>

int main(void)
{
    float a, b;
    scanf("%f %f", &a, &b);

    double m = (b-a)/400;

    double per = pow (10, m);

    printf("%lf",1/(1+per));
}