#include <stdio.h>

int main(){
    int x, z, i, soma, cont = 1;
    scanf("%d", &x);
    scanf("%d", &z);
    while(z <= x){
        scanf("%d", &z);
    }
    soma = x;
    while(soma < z){
        x++;
        soma += x;
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}