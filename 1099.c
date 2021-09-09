#include <stdio.h>

int main(){
    int n, i, j, x, y, soma, aux;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        soma = 0;
        if(x > y){
            aux = x;
            x = y;
            y = aux;
        }
        for(j = x + 1; j < y; j++){
            if(j % 2 != 0){
                soma = soma + j;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}