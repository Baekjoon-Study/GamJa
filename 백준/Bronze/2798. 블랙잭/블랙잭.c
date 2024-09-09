#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int scan[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scan[i]);
    }

    int max = 0;

    // 3중 루프를 사용하여 모든 조합 시도
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int now = scan[i] + scan[j] + scan[k];
                
                if (now <= m && now > max) {
                    max = now; // 최대값 갱신
                }
            }
        }
    }

    printf("%d\n", max);
    return 0;
}
