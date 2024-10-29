#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int stack = 0;
    for (int i = 1; i < num; i++) {
        if (arr[i-1] < arr[i]) {
            stack += (arr[i]-arr[i-1]);
        }
        else {
            if (stack > max) {
                max = stack;
            }
            stack = 0;    
        }
    }
    if (stack > max) max = stack;
    printf("%d", max);
}