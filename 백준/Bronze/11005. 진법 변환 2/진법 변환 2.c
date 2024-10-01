#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, b;
    scanf("%d %d", &n, &b);
    char m[100] = {0};
    int index = 0;

    while (n > 0)
    {
        int remainder = n%b;

        if (remainder < 10) {
            m[index] = remainder + '0'; // '0'과 더해 문자로 변환
        } else {
            m[index] = remainder - 10 + 'A'; // 'A'와 더해 문자로 변환
        }

        n /= b;
        index++;
        
    }
    for (int i = index - 1; i >= 0; i--)
    {
        putchar(m[i]);
    }
    return 0;
}