#include <stdio.h>

int main(void) {
    char arr[5][16];
    int lengths[5];
    int i, j;
    for (i = 0; i < 5; i++) {
        j = 0;
        // getchar();
        while (scanf("%c", &arr[i][j]) && arr[i][j] != '\n') {
            j++;
        }
        arr[i][j] = '\0';
        lengths[i] = j;
    }
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 5; j++) {
            if (i < lengths[j]) printf("%c", arr[j][i]);
        }
    }
}