#include <stdio.h>

int main() {
    float x;
    
    printf("Введите число x: ");
    scanf("%f", &x);
    
    float peace1 = x * x + 2 * x + 1;
    
    float peace2 = (x + 1) * (x + 1) - (x - 1) * (x - 1);
    
    printf("Результаты:\n");
    printf("x^2 + 2x + 1 = %.4f\n", peace1);
    printf("(x + 1)^2 - (x - 1)^2 = %.4f\n", peace2);
    
    printf("\nПроверка: 4x = %.4f\n", 4 * x);
    
    return 0;
}