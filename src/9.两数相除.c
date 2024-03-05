#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;
    printf("请输入被除数和除数:");
    scanf("%d %d", &dividend, &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;
    
    printf("%d 除以 %d = %d\n", dividend, divisor, quotient);
    printf("%d 取余 %d = %d\n", dividend, divisor, remainder);

    return 0;
}