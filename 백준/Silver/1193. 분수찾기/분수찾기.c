#include <stdio.h>

int main(void) {
    int X;
    scanf("%d", &X);
    int sum = 0;
    int start;
    for (int i = 1; i < 10000000; i++) {
        sum += i;
        start = i;
        if (sum >= X) {
            break;
        }
    }

    int minus = sum - X;    
    if (start % 2 == 0) printf("%d/%d", start-minus, 1+minus);
    else printf("%d/%d", 1+minus, start-minus);
}