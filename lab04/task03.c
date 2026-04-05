#include <stdio.h>

int main(void){
    FILE *fp = fopen("test.txt", "w");
    
    fputs("Hello\n", fp);
    fputs("World\n", fp);
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    char str[100];
    while(fgets(str, 100, fp) != NULL){
        printf("%s", str);
    }
    
    fclose(fp);

}