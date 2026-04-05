#include <stdio.h>

int main(void){
    FILE *fp = fopen("test.txt", "w");
    fputs("ABCDEF", fp);
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    fseek(fp, 2, SEEK_SET);
    char c = getc(fp);
    printf("С позиции 2: %c\n", c);
    
    fclose(fp);
}