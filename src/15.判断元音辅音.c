#include <stdio.h>

int main() {
    char char1;

    printf("请输入一个字符:");
    scanf("%c", &char1);
    if(char1 == 'a' || char1 == 'e' || char1 == 'i' || char1 == 'o' || char1 == 'u') {
        printf("输入的:%c为小写元音\n", char1);
    } else if (char1 == 'A' || char1 == 'E' || char1 == 'I' || char1 == 'O' || char1 == 'U') {
        printf("输入的:%c为大写元音\n", char1);
    } else {
        printf("输入的:%c为辅音\n", char1);
    }

    return 0;
}