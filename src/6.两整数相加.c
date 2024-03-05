#include <stdio.h>

int main() {
    int int1, int2, sum;
    printf("以空格隔开，请输入两个整数:");
    scanf("%d %d", &int1, &int2);
    sum = int1 + int2;
    printf("%d + %d = %d\n", int1, int2, sum);
    return 0;
}