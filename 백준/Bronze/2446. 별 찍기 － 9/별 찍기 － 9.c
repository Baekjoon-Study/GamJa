#include <stdio.h> 

//2738
// int main(void)
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int arr1[n][m];
//     int arr2[n][m];

//     int s;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arr2[i][j]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ", arr1[i][j]+ arr2[i][j]);
//         }
//         printf("\n");
//     }

// }

//10872

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     if (n == 0)
//     {
//         n = 1;
//     }

//     int s = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         s *= i;
//     }

//     printf("%d", s);
// }

//15964
// int main(void)
// {
//     long long int a, b;
//     scanf("%lld %lld", &a, &b);

//     printf("%lld", (a+b)*(a-b));
// }

//15953

// int main(void){
//     int n;
//     scanf("%d", &n);

//     int a, b;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d %d", &a, &b);
//         int s = 0;

//         if (a == 1) {s += 5000000;}
//         else if (2 <= a && a <= 3) {s += 3000000;}
//         else if (4 <= a && a <= 6) {s += 2000000;}
//         else if (7 <= a && a <= 10) {s += 500000;}
//         else if (11 <= a && a <= 15) {s += 300000;}
//         else if (16 <= a && a <= 21) {s += 100000;}

//         if (b == 1) {s += 5120000;}
//         else if (2 <= b && b <= 3) {s += 2560000;}
//         else if (4 <= b && b <= 7) {s += 1280000;}
//         else if (8 <= b && b <= 15) {s += 640000;}
//         else if (16 <= b && b <= 31) {s += 320000;}

//         printf("%d\n", s);
//     }
// }

// int main(void)
// {
//     short age, id;
//     int amount;
//     double star;
//     char c;
    
//     printf("나이입력 :");
//     scanf("%hi", &age);
//     printf("%d\n", age);

//     printf("아이디 입력 :");
//     scanf("%hi", &id);
//     printf("%d\n", id);
    
//     printf("생산량 입력 :");
//     scanf("%d", &amount);
//     printf("%d\n", amount);
    
//     printf("별 입력 :");
//     scanf("%lf", &star);
//     printf("%e\n", star);
    
//     printf("문자 입력 :");
//     scanf("%c", &c);
//     printf("%c", c);
    
// }

// int main(void)
// {
//     int a;
//     printf("총 일수를 입력하시오: ");
//     scanf("%d", &a);
    
//     int year, week, day;
    
//     year = a / 365;
//     week = (a % 365 )/ 7;
//     day = (a % 365) - (week * 7);
//     printf("%d %d %d", year, week, day);
// }

// int main(void)
// {
//     int money, item;
//     printf("투입한 돈: ");
//     scanf("%d", &money);
//     printf("물건 값: ");
//     scanf("%d", &item);

//     int m = money-item;
//     printf("%d\n", m);

//     printf("%d\n", m/100);
//     m %= 100;
//     printf("%d", m/10);
// }

// int main(void)
// {
//     float a, b, c;
//     double x = 2.0;
//     double y;
//     scanf("%f %f %f", &a, &b, &c);
//     y = a*x*x + b*x + c;
//     printf("y=%f*x*x + %f*x + %f = %lf", a, b, c, y);
// }

// #include <math.h>
// int main(void)
// {
//     double money, per;
//     int year;
//     printf("초기저금액: ");
//     scanf("%lf", &money);    
//     printf("이율: ");
//     scanf("%lf", &per);    
//     printf("저축기간: ");
//     scanf("%d", &year);

//     double final = money * pow(1+per,year);
//     printf("%d년 후의 원리금=%lf", year, final);    
// }

// int main(void)
// {
//     int year;
//     printf("연도를 입력하시오: ");
//     scanf("%d", &year);

//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//     {
//         printf("%d년은 윤년입니다.", year);
//     }  
//     else 
//     {
//         printf("%d년은 윤년이 아닙니다.", year);
//     }
// }

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 2*n-1; i > 1; i -= 2)
    {
        for (int j = 0; j < n - i/2 - 1; j++)
        {
            printf(" ");
        }    
        for (int j = 0; j < i; j++)
        {    
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= 2*n-1; i += 2)
    {
        for (int j = 0; j < n - i/2 - 1; j++)
        {
            printf(" ");
        }    
        for (int j = 0; j < i; j++)
        {    
            printf("*");
        }
        printf("\n");
    }
}