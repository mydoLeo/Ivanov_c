#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%02d\n:%02d\n:%02d\n", n/3600%24, n/60%60, n%60);
    return 0;
}