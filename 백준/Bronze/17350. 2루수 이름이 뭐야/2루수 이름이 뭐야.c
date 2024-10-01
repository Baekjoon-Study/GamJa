#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int anjdi = 0;
    for (int i = 0; i < n; i++)
    {   
        char str[100];
        scanf("%s", str);
        
        if (strcmp(str, "anj") == 0) 
        {
            anjdi = 1;
        }
    }
    if (anjdi) {printf("뭐야;");}
    else {printf("뭐야?");}
}