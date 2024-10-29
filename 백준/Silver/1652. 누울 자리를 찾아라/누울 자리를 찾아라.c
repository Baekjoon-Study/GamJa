#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char str[n+1][n+1];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            scanf("%c", &str[i][j]);
        }
        getchar();
    }

    int horizontal_count = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            if (str[i][j] == '.') {
                count += 1;
            }
            if ((str[i][j] == 'X') || (j == n-1)) {
                if (count >= 2) {
                    horizontal_count++;
                }
                count = 0;
            }
        }
    }
    
    int vertical_count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            if (str[j][i] == '.') {
                count += 1;
            }
            if ((str[j][i] == 'X') || (j == n-1)) {
                if (count >= 2) {
                    vertical_count++;
                }
                count = 0;
            }
        }
    }

    printf("%d %d", horizontal_count, vertical_count);

    return 0;
}