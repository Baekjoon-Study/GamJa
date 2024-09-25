#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int p = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            p += 1;
            if (p == k)
            {
                printf("%d", i);
                break;
            }
        }
    }
    p += 1;
    if (p < k)
    {
        printf("%d", 0);
    }
    else if (p == k)
    {
        printf("%d", n);
    }
}