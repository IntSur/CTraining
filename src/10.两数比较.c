#include <stdio.h>

int main() {
    int int1, int2;
    printf("请输入两个数:");
    scanf("%d %d", &int1, &int2);

    if(int1 < int2) {
        printf("%d < %d", int1, int2);
    } else {
        printf("%d >= %d", int1, int2);
    }

    return 0;
}