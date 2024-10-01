#include <stdio.h>

int main(void)
{
        int t1, f1, s1, p1 ,c1;
        int t2, f2, s2, p2, c2;
        scanf("%d %d %d %d %d", &t1, &f1, &s1, &p1, &c1);
        scanf("%d %d %d %d %d", &t2, &f2, &s2, &p2, &c2);
        printf("%d %d", t1*6 + f1*3 + s1*2 + p1 + c1*2, t2*6 + f2*3 + s2*2 + p2 + c2*2);
}