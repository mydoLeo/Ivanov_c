#include <stdio.h>
struct date{
    int month;
    int date;
    int year;
};
struct Person{
    char name[100];
    struct date birthday;
};

int  main(void){
    int best=0;
    struct Person Indyx[5];
    for(int i = 0; i<5; i++){
        scanf("%s", Indyx[i].name);
        scanf("%d", &Indyx[i].birthday.date);
        scanf("%d", &Indyx[i].birthday.month);
        scanf("%d", &Indyx[i].birthday.year);
    }

    for(int i = 0; i<5; i++){
        if(Indyx[i].birthday.year>2000){
            printf("Name:%s \t %d.%d.%d\n", Indyx[i].name, Indyx[i].birthday.date, Indyx[i].birthday.month, Indyx[i].birthday.year);
        }
    }
}