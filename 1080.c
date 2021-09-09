#include <stdio.h>

int main(){
    int n, i, posmaior, maior = 0;
    for(i = 0; i < 100; i++){
        scanf("%d", &n);
        if(maior < n){
            maior = n;
            posmaior = i + 1;
        }
    }
    printf("%d\n%d\n", maior, posmaior);
    return 0;
}