#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d\n", &n);

    char p;
    int m = 0;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &p);
        m += (p - 96)*k;
        k *= 31;
    }
    printf("%d", m);
}