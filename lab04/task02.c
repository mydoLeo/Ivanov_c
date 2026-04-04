#include <stdio.h>

int main(void){
    FILE *fp = fopen("test.txt", "w");
    
    putc('H', fp);
    putc('i', fp);
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    char c;
    while((c = getc(fp)) != EOF){
        printf("%c", c);
    }
    
    fclose(fp);

}