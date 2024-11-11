#include <stdio.h>

int main(void) {
    int n, music;
    scanf("%d", &n);

    float sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &music);
        if (music == 0) sum += 2;
        else sum += 1/(float)music;
    }

    printf("%f", sum);
}