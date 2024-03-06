#include <stdio.h>

void flitJishu(int1, int2) {
    int i;
    for(i = int1; i <= int2; i++) {
        if( 1 == i % 2 ) {
            printf("输入区间%d~%d的奇数为%d\n", int1, int2, i);
        }
    }
}

void flitOushu(int1, int2) {
    int i;
    for(i = int1; i <= int2; i++) {
        if( 0 == i % 2 ) {
            printf("输入区间%d~%d的偶数为%d\n", int1, int2, i);
        }
    }
}

int main() {
    int int1, int2;

    printf("请输入两个数，用于指明区间:");
    scanf("%d %d", &int1, &int2);

    flitJishu(int1, int2);
    flitOushu(int1, int2);

    return 0;
}