#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int podmena;  
    
    
    printf("До:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    
    podmena = a;  
    a = b;     
    b = podmena;  
    
    printf("После:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}