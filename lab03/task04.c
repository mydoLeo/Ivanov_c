#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n, m, k;
    scanf("%d",&n);
    int *arr =(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d", &m);
    int *tmp = (int*)realloc(arr, m *sizeof(int));
    for(int i = n; i < m; i++){
        printf("%d:", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < m; i++){
        printf("%d ", arr[i]);
    }   
    scanf("%d", &k);
    tmp = (int*)realloc(arr, k * sizeof(int));
    for(int i = 0; i < k; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
}