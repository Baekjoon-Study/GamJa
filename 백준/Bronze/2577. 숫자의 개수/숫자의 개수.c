#include <stdio.h>

//2475

// int main()
// {
//     int a, b, c, d, e;
//     scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

//     printf("%d", (a*a + b*b + c*c + d*d + e*e) % 10);
//     return 0;
// }

//31403
// int main()
// {
//     int a, b ,c;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     scanf("%d", &c);

//     printf("%d\n", a+b-c);
//     printf("%d", tmp - c);
// }

//10250
// int main()
// {
//     int a, b, c, d, n;
//     scanf("%d", &n);

//     while (n > 0)
//     {
//         scanf("%d %d %d", &a, &b, &c);
        
//         d = 1;

//         while (c > a)
//         {
//             c -= a ;
//             d += 1 ;
//         }

//         if (d < 10) 
//         {
//             printf("%d%d%d\n", c,0,d);
//         }

//         else 
//         {
//             printf("%d%d\n", c,d);
//         }
        
//         n -= 1 ;
//     }
// }

//2577
int main()
{
    int a, b, c, tmp;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);
    
    tmp = a*b*c;
    int count[10] = {0}; 

    while (tmp > 0) 
    {
        count[tmp % 10] += 1;
        tmp = tmp / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", count[i]);
    }
}