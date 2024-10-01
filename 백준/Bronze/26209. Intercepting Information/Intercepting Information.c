#include <stdio.h>

int main(void)
{
    int n[8];
    int sure = 1;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &n[i]);
        if (n[i] == 9)
        {
            sure = 0;
        }
    }
    if (sure) {printf("S");}
    else {printf("F");}
}