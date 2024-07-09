#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Введіть координати центрів(x1,y1,x2,y2) та радіуси колів(r1,r2):");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &r1, &r2);
    

    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (d > r1 + r2) {
        printf("Кількість точок перетину: 0\n");
    } else if (d < fabs(r1 - r2)) {
        printf("Кількість точок перетину: 0\n");
    } else if (d == 0 && r1 == r2) {
        printf("Кількість точок перетину: -1\n");
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        printf("Кількість точок перетину: 1\n");
    } else {
        printf("Кількість точок перетину: 2\n");
    }

    return 0;
}