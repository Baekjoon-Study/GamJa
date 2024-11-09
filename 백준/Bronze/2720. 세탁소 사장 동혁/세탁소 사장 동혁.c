#include <stdio.h>

int main(void) {
    int t, c, quarter, dime, nickel, penny;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &c);
        quarter = 0; dime = 0; nickel = 0; penny = 0;
        while (c >= 25) { quarter++; c -= 25;}
        while (c >= 10) { dime++; c -= 10;}
        while (c >= 5) { nickel++; c -= 5;}
        while (c >= 1) { penny++; c -= 1;}

        printf("%d %d %d %d\n", quarter, dime, nickel, penny);
    }
}