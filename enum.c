#include <stdio.h>
#include <stdlib.h>

enum COLOR {
    RED = 1, GREEN, BLUE
} color;

int main() {
    printf("What is your favourite color? 1.red 2.green 3.blue\n");
    scanf("%u", &color);
    switch(color) {
        case RED:
            printf("Red\n");
            break;
        case GREEN:
            printf("Green\n");
            break;
        case BLUE:
            printf("Blue\n");
            break;
        default:
            printf("default in\n");
    }

    return 0;
}