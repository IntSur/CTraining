#include <stdio.h>

int main() {
    int int1;
    
    printf("请输入一个数:");
    scanf("%d", &int1);
    if( 0 == int1 % 2) {
        printf("输入的数为偶数\n");
    } else {
        printf("输入的数为奇数\n");
    }

    return 0;
}