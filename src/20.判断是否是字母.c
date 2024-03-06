#include <stdio.h>
 
int main()
{
    char char1;
    printf("输入一个字符: ");
    scanf("%c",&char1);
 
    if( (char1>='a' && char1<='z') || (char1>='A' && char1<='Z'))
        printf("%c 是字母",char1);
    else
        printf("%c 不是字母",char1);
 
    return 0;
}