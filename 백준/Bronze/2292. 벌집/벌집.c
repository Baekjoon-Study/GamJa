#include <stdio.h>

//4153
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     int tmp;

//     while (a != 0, b != 0, c != 0)
//     {
//         if (a > b)
//         {
//             tmp = a;
//             a = b;
//             b = tmp;
//         }

//         if (b > c)
//         {
//             tmp = b;
//             b = c;
//             c = tmp;
//         }

//         if (a*a + b*b == c*c)
//         {
//             printf("right\n");
//         }

//         else
//         {
//             printf("wrong\n");
//         }

//         scanf("%d %d %d", &a, &b, &c);
//     }

// }

//30802
// int main()
// {
//     int n, s, m, l, xl, xxl, xxxl, t, p;
//     scanf("%d\n", &n);
//     scanf("%d %d %d %d %d %d\n", &s, &m, &l, &xl, &xxl, &xxxl);
//     scanf("%d %d", &t, &p);

//     int res[6] = {s, m, l ,xl, xxl, xxxl};

//     int a = 6;
    
//     for (int i = 0; i < 6; i++)
//     {
//         if (res[i] > 0)
//         {
//             a += ( res[i] - 1 )/ t ;    
//         }
        
//         else
//         {
//             a -= 1 ;
//         }
//     }

//     printf("%d \n%d %d", a, n/p, n%p);
// }

// 1978
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int scan[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &scan[i]);
//     }

//     int m = 0;

//     for(int i = 0; i < n; i++)
//     {
//         int isprime = 1;

//         if ( scan[i] < 2 )
//         {
//             isprime = 0;
//         }

//         for (int j = 2; j <= scan[i]/2; j++)
//         {
//             if (scan[i] % j == 0)
//             {
//                 isprime = 0;
//                 break;
//             }
//         }
        
//         if (isprime)
//         {
//             m += 1;
//         }
//     }

//     printf("%d", m);
// }

//2231
// int main()
// {
//     int N;
//     scanf("%d", &N);

//     int i;
//     int tmp = N;
//     int sum = 0;
//     int flag = 0;
//     for (i = N-54;i < N;i++)
//     {
//         sum=tmp = i;
//         while (tmp>0)
//         {
//             sum+= tmp % 10;
//             tmp /= 10;
//         }
//         if (sum == N)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     flag == 1 ? printf("%d",i) : printf("0");
// }

//2292
int main()
{
    long long n;
    scanf("%lld", &n);
    
    long long m = 0;
    long long a = 1;
    long long b = 0;

    for (long long i = 1; i <= n; i++)
    {   
        if (a >= n && n >= b)
        {
            m = i ;
            break;
        } 
        a += i*6;
        b += i*2;
    }
    printf("%lld", m);
}