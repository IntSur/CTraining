#include <stdio.h>
int main()
{
    int number;
 
    printf("输入一个数字: ");
    scanf("%d", &number);
 
    if (number <= 0)
    {
        if (number == 0)
            printf("你输入的是 0。");
        else
            printf("你输入的是负数。");
    }
    else
        printf("你输入的是正数。");
    return 0;
}