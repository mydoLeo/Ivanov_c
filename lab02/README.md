Ответы на вопросы: 
1)
struct Имя { тип; };
typedef struct Имя { тип; } Псевдоним;
2)
Структура внутри структуры. Нужны для группировки данных.
struct Data{ int day; };
struct People{ struct when_he_bern; };
3)
void Skud(struct Student s) {
    printf("%s", s.name);} - копирует
 vid Skud(struct Student *s) {
    s->age = 21; - меняет
}
4)
struct S arr[10];
5)
arr[i].поле — точка для массива
arr[i]->поле — стрелка для указателя
6)
typedef struct Student {
    char name[20];
    int age;
    enum{First = 1, Second, Third, Fourth} course;
    float med_ball;
} Stud;
7)
нет можно с помощью strcmp 
if (strcmp(str, S[i].name) == 0) printf("%d Student\t%s\t%d\t%d\t%g\n", i+1, S[i].name, S[i].age, S[i].course, S[i].med_ball);
