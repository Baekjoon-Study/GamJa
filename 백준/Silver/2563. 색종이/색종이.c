#include <stdio.h>

int main(void) {
    int arr[100][100] = {0};
    int num, x, y, i, j, xloop, yloop, sum;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d %d", &x, &y);
        for (xloop = x; xloop < x + 10; xloop++) {
            for (yloop = y; yloop < y + 10; yloop++) {
                arr[xloop][yloop] = 1;
            }
        }
    }

    sum = 0;

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            sum += arr[i][j];
        }
    }

    printf("%d", sum);
}