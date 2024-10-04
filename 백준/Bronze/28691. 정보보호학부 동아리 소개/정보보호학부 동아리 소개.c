#include <stdio.h>

int main(void)
{
    char str[1];
    scanf("%c", str);

    if (str[0] == 'M') {printf("MatKor");}
    if (str[0] == 'W') {printf("WiCys");}
    if (str[0] == 'C') {printf("CyKor");}
    if (str[0] == 'A') {printf("AlKor");}
    if (str[0] == '$') {printf("$clear");}
    
}