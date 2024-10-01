#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    int arr[k];
    for(int i = 1; i <= k; i++)
    {
        int num = n*i;
        int m = 0;
        if (100 > num && num>= 10)
        {
            m += (num%10)*10;
            m += num/10;
        }
        else if (1000 > num && num >= 100)
        {
            m += (num%10)*100;
            m += ((num%100)-(num%10));
            m += num/100;
        }
        else if (10000> num && num >= 1000)
        {
            m += (num%10)*1000;
            m += ((num%1000)-(num%100))/10;
            m += ((num%100)-(num%10))*10;
            m += num/1000;
        }
        else if (100000 > num && num >= 10000)
        {
            m += (num%10)*10000;
            m += ((num%10000)-(num%1000))/100;
            m += ((num%1000)-(num%100));
            m += ((num%100)-(num%10))*100;
            m += num/10000;
        }
        else if (1000000 > num && num >= 100000)
        {
            m += (num%10)*100000;
            m += ((num%100000)-(num%10000))/1000;
            m += ((num%10000)-(num%1000))/10;
            m += ((num%1000)-(num%100))*10;
            m += ((num%100)-(num%10))*1000;
            m += num/100000;
        }
        else if (num == 1000000)
        {
            m = 1;
        }
        else
        {
            m = num;
        }
        arr[i-1] = m;
    }
    int max = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] > max) {max = arr[i];}
    }
    printf("%d", max);
}