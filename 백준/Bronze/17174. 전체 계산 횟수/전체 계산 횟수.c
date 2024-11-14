#include <stdio.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);
    int tmp = N;
    do {
        tmp /= M;
        N += tmp;
    } while (tmp >= M);
    
    printf("%d", N);
}