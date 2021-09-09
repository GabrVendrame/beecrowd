#include <stdio.h>

int main(){
    int X, Y, i, soma = 0, maior;
    scanf("%d %d", &X, &Y);
    if(X > Y){
        maior = X;
        X = Y;
        Y = maior;
    }
    for(i = X + 1; i < Y; i++){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }
    printf("%d\n", soma);
    return 0;
}