#include <stdio.h>

int main(){
    int x, y, maior, i, soma = 0;
    scanf("%d %d", &x, &y);
    if(x > y){
        maior = x;
        x = y;
        y = maior;
    }
    for(i = x; i <= y; i++){
        if(i % 13 != 0){
            soma += i;
        }
    }
    printf("%d\n", soma);
    return 0;
}