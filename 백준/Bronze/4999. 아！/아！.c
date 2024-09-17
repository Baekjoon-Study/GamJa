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
#include <string.h>

int main(void)
{
    char  a[1000], b[1000];
    scanf("%s", &a);
    scanf("%s", &b);
    if (strlen(a) >= strlen(b))
    {
        printf("go");
    }
    else 
    {
        printf("no");
    }
}
