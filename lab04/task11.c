#include <stdio.h>

int main(void){
    FILE *fp = fopen("test.txt", "w");
    putc('A', fp);
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    char c;
    while((c = getc(fp)) != EOF){
        printf("%c", c);
    }
    
    if(feof(fp)){
        printf("Конец файла\n");
    }
    if(ferror(fp)){
        printf("Ошибка\n");
    }
    
    fclose(fp);
}