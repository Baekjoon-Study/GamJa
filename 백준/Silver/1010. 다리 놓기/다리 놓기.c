#include <stdio.h>

long long binomial_coefficient(int n, int k) {
    if (k > n) return 0; // k가 n보다 크면 이항계수는 0

    long long result = 1;
    
    // k가 n-k보다 클 경우, 대칭성을 이용
    if (k > n - k) {
        k = n - k;
    }

    for (int i = 0; i < k; i++) {
        result *= (n - i); // 분자
        result /= (i + 1); // 분모
    }

    return result;
}

int main() {
    int n; // 테스트 케이스 수
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        // 이항계수 C(b, a) 계산
        long long result = binomial_coefficient(b, a);
        printf("%lld\n", result); // 결과 출력
    }

    return 0;
}
