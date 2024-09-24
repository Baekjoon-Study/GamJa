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

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 2*n-1; i > 1; i -= 2)
//     {
//         for (int j = 0; j < n - i/2 - 1; j++)
//         {
//             printf(" ");
//         }    
//         for (int j = 0; j < i; j++)
//         {    
//             printf("*");
//         }
//         printf("\n");
//     }

//     for (int i = 1; i <= 2*n-1; i += 2)
//     {
//         for (int j = 0; j < n - i/2 - 1; j++)
//         {
//             printf(" ");
//         }    
//         for (int j = 0; j < i; j++)
//         {    
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for (int i=1; i<2*n; i++){
//         for(int j=0; j<n; j++) j<(i<n? n-i:i-n)? printf(" "):printf("*");
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
    
//     printf("%d", a > (b>c? b:c)? a : (b>c? b:c));
// }

// int main(void)
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
    
//     printf("%d", a < (b<c? b:c)? a : (b<c? b:c));
// }

// int main(void)
// {
//     int a, b, c;
//     printf("수학, 물리, 화학 점수를 한줄에 입력하시오: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a >= 50 && b >= 50 && c >= 50)
//     {
//         if (a + b >= 150 || a + c >= 150)
//         {
//             printf("가입할 수 있습니다.");
//         }
//         else
//         {
//             printf("가입할 수 없습니다.");
//         }
//     }
//     else
//     {
//         printf("가입할 수 없습니다.");
//     }
// }

// int main(void)
// {
//     int a, b, c;
//     printf("삼각형의 세변 입력: ");
//     scanf("%d %d %d", &a, &b, &c);
    
//     if ((a + b > c) && (a + c > b) && (b + c > a))
//     {
//         printf("유효한 삼각형.");
//     }
//     else
//     {
//         printf("유효하지 않은 삼각형.");
//     }
// }

// #include <math.h>

// int main(void)
// {
//     float a, b, c;
//     printf("계수 a, b, c 를 입력하시오: ");
//     scanf("%f %f %f", &a, &b, &c);

//     printf("첫 번째 실근 = %f", (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a));
//     printf("두 번째 실근 = %f", (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a));
// }

// int main(void)
// {
//     int n;
//     printf("오늘의 기온을 입력하시오: ");
//     scanf("%d", &n);

//     if (n < -10) printf("매우 추운 날씨입니다.");
//     else if (n < 0) printf("추운 날씨입니다.");
//     else if (n < 10) printf("쌀쌀한 날씨입니다.");
//     else if (n < 20) printf("쾌적한 날씨입니다.");
//     else if (n < 30) printf("더운 날씨입니다.");
//     else printf("무더운 날씨입니다.");
// }

// int main(void)
// {
//     int arr[9][9];
//     int max = 0, maxI, maxJ;
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = 0; j < 9; j++)
//         {
//             scanf("%d", &arr[i][j]);
//             if (arr[i][j] > max)
//             {
//                 max = arr[i][j];
//                 maxI = i+1;
//                 maxJ = j+1;
//             }
//         }
//     }
//     printf("%d\n%d %d", max, maxI, maxJ);
// }

// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n하나를 선택하세요(가위-0, 바위-1, 보-2): ");
//     int user;
//     scanf("%d", &user);

//     srand(time(NULL));
//     int com = rand() % 3;

//     printf("사용자 = %d\n컴퓨터 = %d\n", user, com);

//     if (user == com) printf("비겼음");
//     else if (user == ((com+1)% 3))
//     {
//         printf("이겼음");
//     }
//     else
//     {
//         printf("졌음");
//     }
//     return 0;
// }




// #include <string.h>

// int main(void)
// {
//     int arr[5][15];
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 15; j++)
//         {
//             scanf("%c", &arr[i][j]);
//             if (arr[i][j] == '\n') 
//             {
//                 arr[i][j] = '\0';
//                 break;
//             }
//         }
//     }

//     char str[75] = "";
//     for (int i = 0; i < 15; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (arr[j][i] == '\0') break;
//             printf("%c", arr[j][i]);
//         }
//     }
// }




#include <string.h>
#include <math.h>

int main(void)
{
    char str[100];
    int b;
    scanf("%s %d", str, &b);

    int m = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        char current_char = str[strlen(str) - i - 1];
        if (current_char >= 'A' && current_char <= 'Z') 
        {
            m += (current_char - 'A' + 10) * pow(b, i);
        } 
        else 
        {
            m += (current_char - '0') * pow (b, i);
        }
    }
    printf("%d\n", m);
}