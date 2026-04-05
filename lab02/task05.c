#include <stdio.h>
enum Day{
    MONDAY,     
    TUESDAY,    
    WEDNESDAY,  
    THURSDAY,   
    FRIDAY,     
    SATURDAY,   
    SUNDAY,      
};
struct MTWTFSS{
    enum Day day;
};
void printDay(enum Day d) {
    switch (d) {
        case MONDAY:    printf("Пн"); break;
        case TUESDAY:   printf("Вт"); break;
        case WEDNESDAY: printf("Ср"); break;
        case THURSDAY:  printf("Чт"); break;
        case FRIDAY:    printf("Пт"); break;
        case SATURDAY:  printf("Сб"); break;
        case SUNDAY:    printf("Вс"); break;
    }
}   
int main(void){
    int n;
    enum Day today;
    struct MTWTFSS n1;
    
    scanf("%d", &n);
    today = n-1;
    printDay(today);
    
    scanf("%d", &n);
    n1.day = n-1;
    printDay(n1.day);
}