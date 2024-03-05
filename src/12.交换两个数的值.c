#include <stdio.h>

void exchangeIntsByPtr(int *ptr1, int *ptr2) {
    int tmp;
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}

int main() {
    int int1, int2, tmp;
    printf("请输入两个数:");
    scanf("%d %d", &int1, &int2);
    tmp = int2;
    int2 = int1;
    int1 = tmp;
    printf("%d %d\n", int1, int2);
    exchangeIntsByPtr(&int1, &int2);
    printf("%d %d\n", int1, int2);
    return 0;
}