#include <stdio.h>

int main() {
    char char1;
    printf("请随意按下一个键:");
    scanf("%c", &char1);
    printf("%c对应的ASCII是%d\n", char1, char1);
    return 0;
}