#include <stdio.h>
#include <math.h>

int count(int p) {
    if (p <= 2) return pow(2, p);
    return pow(2, p) - 2 * (p - 2);
}

int main() {
    int p;
    printf("Введіть p (p <= 30): ");
    scanf("%d", &p);
    if (p > 30 || p < 1) {
        printf("Помилка. 1 <= p <= 30.\n");
        return 1;
    }
    int result = count(p);
    printf("Кількість чисел: %d\n", result);
    return 0;
}