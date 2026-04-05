#include <stdio.h>

int main() {
    int a = 5;
    
    printf("Начальное значение a = %d\n", a);
    
    printf("a++ = %d (значение после: %d)\n", a++, a);
    
    printf("++a = %d (значение после: %d)\n", ++a, a);
    
    printf("a-- = %d (значение после: %d)\n", a--, a);
    
    printf("--a = %d (значение после: %d)\n", --a, a);
    
    return 0;
}