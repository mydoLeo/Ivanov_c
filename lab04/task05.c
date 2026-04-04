#include <stdio.h>

int main(void){
    char str[100];
    printf("Введите строку: ");
    fgets(str, 100, stdin);
    
    FILE *fp = fopen("test.txt", "w");
    fputs(str, fp);
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    char out[100];
    fgets(out, 100, fp);
    printf("В файле: %s", out);
    
    fclose(fp);
}