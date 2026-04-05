#include <stdio.h>

typedef struct Person{
    char name[100];
    int age;
} Pers;

int main(void){
    Pers p = {"Ivan", 20};
    
    FILE *fp = fopen("person.bin", "wb");
    fwrite(&p, sizeof(Pers), 1, fp);
    fclose(fp);
    
    Pers read;
    fp = fopen("person.bin", "rb");
    fread(&read, sizeof(Pers), 1, fp);
    printf("%s %d\n", read.name, read.age);
    
    fclose(fp);
}