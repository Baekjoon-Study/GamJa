#include <stdio.h>
#include <math.h>

int main(void) {
    int N, sum;
    scanf("%d", &N);
    sum = 2;
    for (int i = 0; i < N; i++) {
        sum += pow(2, i);
    }
    printf("%d", sum*sum);
}