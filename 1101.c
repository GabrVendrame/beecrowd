#include <stdio.h>

int main(){
    int m, n, i = 1, j, maior, soma;
    while(i > 0){
        soma = 0;
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0){
            i = 0;
        } else{
            if(m > n){
                for(j = n; j <= m; j++){
                    printf("%d ", j);
                    soma = soma + j;
                }
                i++;
                printf("Sum=%d\n", soma);   
            } else{
                for(j = m; j <= n; j++){
                    printf("%d ", j);
                    soma = soma + j;
                }
                i++;
                printf("Sum=%d\n", soma);
            }
        }
    }
    return 0;
}