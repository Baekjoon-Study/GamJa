#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000001];
    scanf("%s", str);

    char arr[1000001];
    scanf("%s", arr);

    char* true = strstr(str, arr);

    if (true != NULL) {printf("%d", 1);}
    else {printf("%d", 0);}
}