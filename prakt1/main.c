#include <stdio.h>

int main() {
    double t1, t2, t3;
    
    
    printf("Введіть часи в годинах (t1 t2 t3): ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    
    
    double speed1 = 1.0 / t1;
    double speed2 = 1.0 / t2;
    double speed3 = 1.0 / t3;
    
    
    double total_speed = speed1 + speed2 + speed3;
    
    
    double time_required = 1.0 / total_speed;
    
    printf("Час, необхідний для поїдання пирога: %.2lf години\n", time_required);
    
    return 0;
}