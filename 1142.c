#include <stdio.h>

int main(){
    int n, i , j, aux = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= 3; j++){
            printf("%d ", aux);
            aux++;
        }
        printf("PUM\n");
        aux++;
    }
    return 0;
}