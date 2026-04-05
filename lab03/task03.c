#include <stdio.h>
#include <stdlib.h>

int max(int n, int *arr){
    int m = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > m) m = arr[i];
    }
    return m;
}

int min(int n, int *arr){
    int m = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < m) m = arr[i];
    }
    return m;
}

int sum(int n, int *arr){
    int s = 0;
    for(int i = 0; i < n; i++){
        s = s + arr[i];
    }
    return s;
}

int main(void){
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Макс=%d\n", max(n, arr));
    printf("Мин=%d\n", min(n, arr));
    printf("Сумма=%d\n", sum(n, arr));
    
    free(arr);
  
}