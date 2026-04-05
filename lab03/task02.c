#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    scanf("%d", &n);
    int *arr = calloc(n, sizeof(int));
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    free(arr);
 
}