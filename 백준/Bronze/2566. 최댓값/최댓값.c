#include <stdio.h>

int main(void)
{
    int arr[9][9];
    int max = -1, maxI, maxJ;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                maxI = i+1;
                maxJ = j+1;
            }
        }
    }
    printf("%d \n%d %d", max, maxI, maxJ);
}