#include <stdio.h>

int main() {
    int x, y;

    printf("Введите значение x: ");
    scanf("%d", &x);


    y = 5 * x + 20;
    printf("Значение y: %d\n", y);


    y *= 2;
    printf("Значение у, умноженное на 2: %d\n", y);


    return 0;
}