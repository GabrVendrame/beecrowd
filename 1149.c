#include <stdio.h>

int main(){
    int a, n, i, soma = 0;
    scanf("%d %d", &a, &n);
    while(n <= 0){
        scanf("%d", &n);
    }
    for(i = 0; i <= n - 1; i++){
        soma += a + i;
    }
    printf("%d\n", soma);
    return 0;
}