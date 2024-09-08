#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a, b, i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        
        long long x = 1;
        long long y = 1;
        
        for (j = b; j > b-a; j--)
        {
            x *= j;
            x /= b-j+1;
        }
        
        printf("%lld\n", x);
    }
}