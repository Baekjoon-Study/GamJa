#include <stdio.h>

int main(void)
{
    long long n, m;

    while (scanf("%lld %lld", &n, &m) == 2)
    {
        printf("%lld\n", m/(n+1));
    }
    return 0;
}