#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *arr = NULL;
    int n = 0;
    int vibor;
    
    do{
        printf("\n1.Доб 2.Удал 3.Вывод 4.Размер 0.Выход\n");
        printf("Выбор: ");
        scanf("%d", &vibor);
        
        if(vibor == 1){
            int val;
            printf("Знач: ");
            scanf("%d", &val);
            
            int *tmp = realloc(arr, (n + 1) * sizeof(int));
            if(tmp != NULL){
                arr = tmp;
                arr[n] = val;
                n++;
            }
        }
        
        if(vibor == 2 && n > 0){
            int idx;
            printf("Индекс: ");
            scanf("%d", &idx);
            
            for(int i = idx; i < n - 1; i++){
                arr[i] = arr[i + 1];
            }
            
            int *tmp = realloc(arr, (n - 1) * sizeof(int));
            if(tmp != NULL) arr = tmp;
            n--;
        }
        
        if(vibor == 3){
            printf("Лист: ");
            for(int i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        
        if(vibor == 4){
            int new_n;
            printf("Новый размер: ");
            scanf("%d", &new_n);
            
            int *tmp = realloc(arr, new_n * sizeof(int));
            if(tmp != NULL){
                arr = tmp;
                if(new_n > n){
                    for(int i = n; i < new_n; i++){
                        printf("Элемент %d: ", i);
                        scanf("%d", &arr[i]);
                    }
                }
                n = new_n;
            }
        }
        
    } while(vibor != 0);
    
    free(arr);
}