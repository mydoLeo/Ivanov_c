#include <stdio.h>

typedef struct Person{
    char name[100];
    int age;
} Pers;

int main(void){
    Pers p;
    int n;
    
    printf("Колво: ");
    scanf("%d", &n);
    getchar();
    
    FILE *fp = fopen("base.bin", "wb");
    for(int i = 0; i < n; i++){
        printf("Имя: ");
        fgets(p.name, 100, stdin);
        printf("Возраст: ");
        scanf("%d", &p.age);
        getchar();
        fwrite(&p, sizeof(Pers), 1, fp);
    }
    fclose(fp);
    
    printf("В файле:\n");
    fp = fopen("base.bin", "rb");
    while(fread(&p, sizeof(Pers), 1, fp) == 1){
        printf("%s%d\n", p.name, p.age);
    }
    
    fclose(fp);

}