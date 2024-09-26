#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char max[n][100]; // 이름 저장
    int scores[n]; 

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", max[i], &scores[i]);
    }

    int min = scores[0];
    char minname[100];

    for (int i = 0; i < 100; i++) {
        minname[i] = max[0][i];
    }

    for (int i = 1; i < n; i++)
    {
        if (min > scores[i]) 
        {   
            min = scores[i];
            for (int j = 0; j < 100; j++) {
                minname[j] = max[i][j];
            }
        }
    }
    printf("%s", minname);
}