#include <stdio.h>

int main(void) {
    int a, w, v;
    scanf("%d", &a);
    scanf("%d %d", &w, &v);
    if (a <= (w/v)) {printf("%d", 1);}
    else {printf("%d", 0);}
}