#include <stdio.h>
#include <string.h>

int main(void) {
    int num, h;
    scanf("%d", &num);
    getchar();  // 숫자 입력 후 개행 문자 제거

    for (int i = 0; i < num; i++) {
        scanf("%d", &h);
        getchar();  // h 입력 후 개행 문자 제거
        char arr[101];
        int j = 0;

        // 문자 입력 받기
        while (1) {
            char c = getchar();
            if (c == '\n' || j >= 100) break;  // 개행 문자 또는 배열 크기 초과 시 종료
            arr[j++] = c;
        }
        arr[j] = '\0';  // 문자열 종료

        // h 값 계산
        for (int k = 0; k < strlen(arr); k++) {
            if (h == 0) break;
            if (arr[k] == 'b') h--;
            if (arr[k] == 'c') h++;
        }

        // 결과 출력
        printf("Data Set %d:\n", i + 1);
        printf("%d\n", h);
        printf("\n");
    }

    return 0;
}
