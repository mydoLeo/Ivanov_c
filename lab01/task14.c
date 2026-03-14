#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Адреса переменных:\n");
    printf("&a = %p\n", (void*)&a);
    printf("&b = %p\n", (void*)&b);
    printf("&c = %p\n", (void*)&c);
    
    printf("Разницы между адресами:\n");
    printf("&a - &b = %ld байт\n", (long)&a - (long)&b);
    printf("&b - &c = %ld байт\n", (long)&b - (long)&c);
    printf("&a - &c = %ld байт\n", (long)&a - (long)&c);
    
    printf("Размер int: %zu байт\n", sizeof(int));
    
    return 0;
}