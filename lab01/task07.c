#include <stdio.h>

int main() {
    float a = 0.1;
    float b = 0.2;
    float c = a + b;
    
    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("a + b = %.20f\n", c);
    
    return 0;
}