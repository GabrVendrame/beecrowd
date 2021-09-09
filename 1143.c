#include <stdio.h>

int main(){
    int n, i , j, aux;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        aux = 1;
        for(j = 1; j <= 3; j++){
            aux = aux * i;
            if(j == 3){
                printf("%d", aux);
            } else{
                printf("%d ", aux);
            }
        }
        printf("\n");
    }
    return 0;
}