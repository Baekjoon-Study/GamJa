#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i=1; i<2*n; i++){
        for(int j=0; j<n; j++) j<(i<n? n-i:i-n)? printf(" "):printf("*");
        printf("\n");
    }
}