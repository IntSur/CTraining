#include <stdio.h>

int main() {
    int int1 = 1;
    float float1 = 1;
    double double1 = 1;
    char char1 = 'c';

    printf("他们对应的字节数是：%d %d %d %d .\n", sizeof(int1), sizeof(float1), sizeof(double1), sizeof(char1));
    return 0;
}