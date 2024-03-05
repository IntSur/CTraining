#include <stdio.h>

int main() {
    float float1, float2, product;
    printf("以空格隔开，请输入两个浮点数:");
    scanf("%f %f", &float1, &float2);
    product = float1 * float2;
    printf("%.2f * %.2f = %.2f\n", float1, float2, product);
    return 0;
}