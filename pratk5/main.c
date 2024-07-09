#include <stdio.h>

#define MOD 12345


int count(int n) {
    if (n == 1) return 2; 
    if (n == 2) return 4; 
    if (n == 3) return 7; 
    
    
    int a = 2; 
    int b = 4; 
    int c = 7; 

    int result;
    for (int i = 4; i <= n; i++) {
        result = (a + b + c) % MOD;
        a = b;
        b = c;
        c = result;
    }

    return result;
}

int main() {
    int n;
    
    
    printf("Введіть довжину послідовностей (n) , від 1 до 10000: ");
    scanf("%d", &n);

    
    if (n <= 1 || n >= 10000) {
        printf("Неправильні межі. Потрібно від 1 до 10000.\n");
        return 1;
    }

    
    printf("Кількість шуканих послідовностей %d: %d\n", n, count(n));

    return 0;
}
