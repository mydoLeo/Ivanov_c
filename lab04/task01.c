#include <stdio.h>

int main(void){
    FILE *fp = fopen("test.txt", "w");
    
    if(fp == NULL){
        printf("Ошибка\n");
        return 1;
    }
    
    printf("открыт\n");
    fclose(fp);
}