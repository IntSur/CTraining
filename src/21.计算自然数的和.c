#include <stdio.h>
 
int addNumber(int int1) {
    if(int1 != 0) {
        return int1 + addNumber(int1 - 1);
    } else {
        return int1;
    }
}

int main()
{
    //用递归的方式实现
    int stopint;
    printf("请输入一个终止数：");
    scanf("%d", &stopint);
    int result = addNumber(stopint);
    printf("result = %d\n", result);
    return 0;
}