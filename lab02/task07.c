#include <stdio.h>
#include <string.h>

typedef struct Student{
    char name[100];
    int age;
    float midell_ball;
    enum {First=1,Second,Third,Fourth} Kyrs;
}Skud;

void Dobav(Skud S[], int *c){
    printf("Имя:\n");
    scanf("%s", S[*c].name);
    printf("Возраст:\n");
    scanf("%d", &S[*c].age);
    printf("Средний балл:\n");
    scanf("%f", &S[*c].midell_ball);
    printf("Курс:\n");
    int kurs;
    scanf("%d", &kurs);
    S[*c].Kyrs = kurs;
    printf("\n");
    (*c)++;
}

void vivod(Skud S[], int *c){
    for(int i =0; i < *c; i++){
        printf("Студент:%s\t%d\t%.2f\t%d\n", S[i].name, S[i].age, S[i].midell_ball, S[i].Kyrs);
    }
}

void sort(Skud S[], int *c){
    Skud podmen;
    for(int j =0; j<*c-1;j++){
        for(int i=0; i<*c-1-j;i++){
        if(S[i].midell_ball>S[i+1].midell_ball){
            podmen = S[i];
            S[i] = S[i+1];
            S[i+1] = podmen;
        }
    }
    }
}

void find(Skud S[], int *c) {
    char str[20];
    printf("Поиск:\t");
    scanf("%s", str);
    for (int i = 0; i < *c; i++) {
        if (strcmp(str, S[i].name) == 0) {
            printf("Студент:%s\t%d\t%.2f\t%d\n", S[i].name, S[i].age, S[i].midell_ball, S[i].Kyrs);
        }
    }
}

int main(){
    Skud S[100];  
    int c = 0;   
    int vibor;
    
    do{
        printf("1. Добавить студента\n");
        printf("2. Вывод списка\n");
        printf("3. Сортировка по баллу\n");
        printf("4. Поиск по имени\n");
        printf("0. Выход\n");
        printf("Выбор: ");
        scanf("%d", &vibor);
        
        switch(vibor){
            case 1: Dobav(S, &c); break;
            case 2: vivod(S, &c); break;
            case 3: sort(S, &c); printf("Сорт успешно\n"); break;
            case 4: find(S, &c); break;
            case 0: printf("Выход.\n"); break;
            default: printf("Неверный выбор\n");
        }
    } while(vibor != 0);
    
    return 0;
}