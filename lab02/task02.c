#include <stdio.h>

struct Student{
    char name[100];
    int age;
    float midell_ball;
};

int  main(void){
    int best=0;
    struct Student Indyx[5];
    for(int i = 0; i<5; i++){
    scanf("%s", Indyx[i].name);
    scanf("%d", &Indyx[i].age);
    scanf("%f", &Indyx[i].midell_ball);
    }

    for(int i = 0; i<5; i++){
    printf("Name:%s \t Age: %d \t Midel: %f\n", Indyx[i].name, Indyx[i].age, Indyx[i].midell_ball);
    if(Indyx[i].midell_ball>Indyx[best].midell_ball)best=i;
}
printf("Max:%f У %s\n", Indyx[best].midell_ball, Indyx[best].name );
}