#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void) {
    double a1, p1, r1, p2;
    scanf("%lf %lf", &a1, &p1);
    scanf("%lf %lf", &r1, &p2);

    if (a1/p1 <= r1*r1*M_PI/p2) printf("Whole pizza");
    else printf("Slice of pizza");

    return 0;
}