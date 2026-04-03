#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, m;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &m);
    
    for(int i = m; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    
    int *tmp = realloc(arr, (n - 1) * sizeof(int));
    if(tmp != NULL) arr = tmp;
    
    for(int i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}