#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == t) {count += 1;}
    }
    printf("%d", count);
}