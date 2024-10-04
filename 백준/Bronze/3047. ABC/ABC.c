#include <stdio.h>

int main(void)
{
    int str[3];
    scanf("%d %d %d", &str[0], &str[1], &str[2]);

    int tmp;

    if (str[0] > str[1])
    {
        tmp = str[0];
        str[0] = str[1];
        str[1] = tmp;
    }

    if (str[1] > str[2])
    {
        tmp = str[1];
        str[1] = str[2];
        str[2] = tmp;
    }

    if (str[0] > str[1])
    {
        tmp = str[0];
        str[0] = str[1];
        str[1] = tmp;
    }

    char eng[4];
    scanf("%3s", eng);
    for (int i = 0; i < 3; i++)
    {
        if (eng[i] == 'A') {printf("%d ", str[0]);}
        if (eng[i] == 'B') {printf("%d ", str[1]);}
        if (eng[i] == 'C') {printf("%d ", str[2]);}
    }

}