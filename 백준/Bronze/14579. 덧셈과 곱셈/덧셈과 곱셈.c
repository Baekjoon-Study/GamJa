#include <stdio.h>

int main(void) {
    int a, b, multi, sum;
    scanf("%d %d", &a, &b);
    multi = 1;
    for (int i = a; i <= b; i++) {
        sum = 0;
        for (int j = 1; j <= i; j++) {
            sum  += j;
        }
        multi *= sum;
        multi %= 14579;
    }
    printf("%d", multi);

    return 0;
}