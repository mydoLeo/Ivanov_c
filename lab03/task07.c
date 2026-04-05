#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
    char name[100];
    int age;
} Skud;

int main(void){
    int n;
    scanf("%d", &n);
    Skud *S = malloc(n * sizeof(Skud));
    
    for(int i = 0; i < n; i++){
        printf("Имя: ");
        scanf("%s", S[i].name);
        printf("Возраст: ");
        scanf("%d", &S[i].age);
    }
    
    printf("Лист:\n");
    for(int i = 0; i < n; i++){
        printf("%s %d\n", S[i].name, S[i].age);
    }
    
    int max = 0;
    for(int i = 1; i < n; i++){
        if(S[i].age > S[max].age) max = i;
    }
    printf("Пожилой: %s = %d\n", S[max].name, S[max].age);
    
    free(S);

}