#include <stdio.h>

int main(void){
    FILE *fp = fopen("test.txt", "w");
    fputs("Hello", fp);
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    printf("Размер: %ld\n", size);
    
    fclose(fp);
}