#include <stdio.h>
int main() {
    int x, y;
    printf("Введите значение x: ");
    scanf("%d", &x);

    y = 5 * x + 20;

    printf("Значение y равно %d\n", y);

    return 0;
}