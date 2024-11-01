#include <stdio.h>
#define SIZE 5

void print_arr(int new_arr[]) {
    for (int k = 0; k < SIZE; k++) {
        printf("%d ", new_arr[k]);
    }
    printf("\n");
}
int main(void) {
    int arr[SIZE], i, j;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int tmp;

    for (i = 0; i < SIZE-1; i++) {
        for (j = 0; j < SIZE-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                print_arr(arr);
            }
        }
    }
}