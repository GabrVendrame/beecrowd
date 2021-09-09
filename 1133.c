#include <stdio.h>

int main(){
    int x, y, maior, i, soma = 0;
    scanf("%d %d", &x, &y);
    if(x > y){
        maior = x;
        x = y;
        y = maior;
    }
    for(i = x + 1; i < y; i++){
        if(i % 5 == 2 || i % 5 ==3){
            printf("%d\n", i);
        }
    } 
    return 0;
}