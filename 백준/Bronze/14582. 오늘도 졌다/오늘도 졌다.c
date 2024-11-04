#include <stdio.h>

int main(void) {
    int arr1[9], arr2[9], i;

    for (i = 0; i < 9; i++) {
        scanf("%d", &arr1[i]);
    }

    getchar();

    for (i = 0; i < 9; i++) {
        scanf("%d", &arr2[i]);
    }

    int sum1, sum2, iswin;
    sum1 = 0; sum2 = 0; iswin = 0;

    for (i = 0; i < 9; i++) {
        sum1 += arr1[i];
        if (sum1 > sum2) iswin = 1;
        sum2 += arr2[i];
    }

    if (iswin && (sum1 < sum2)) printf("Yes");
    else printf("No");
}