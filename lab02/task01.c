#include <stdio.h>

struct Student{
    char name[100];
    int age;
    float midell_ball;
};

int  main(void){
    struct Student Alex;
    scanf("%s", Alex.name);
    scanf("%d", &Alex.age);
    scanf("%f", &Alex.midell_ball);
    printf("Name:%s \t Age: %d \t Midel: %f\n", Alex.name, Alex.age, Alex.midell_ball);
}