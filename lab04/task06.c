#include <stdio.h>

int main(void){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    FILE *fp = fopen("data.bin", "wb");
    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);
    
    int read[5];
    fp = fopen("data.bin", "rb");
    fread(read, sizeof(int), n, fp);
    
    for(int i = 0; i < n; i++){
        printf("%d ", read[i]);
    }

    
    fclose(fp);
}