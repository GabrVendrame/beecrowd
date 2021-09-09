#include <stdio.h>

int main(){
    int i, n, quant;
    float quantS = 0, quantR = 0, quantC = 0, total = 0;
    char tipo;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %c", &quant, &tipo);
        total+=quant;
        if(tipo == 'S'){
            quantS += quant;
        } else if(tipo == 'R'){
            quantR += quant;
        } else if(tipo == 'C'){
            quantC += quant;
        }
    }
    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %.0f\n", quantC);
    printf("Total de ratos: %.0f\n", quantR);
    printf("Total de sapos: %0.f\n", quantS);
    printf("Percentual de coelhos: %.2f %\n", (quantC * 100) / total);
    printf("Percentual de ratos: %.2f %\n", (quantR * 100) / total);
    printf("Percentual de sapos: %.2f %\n", (quantS * 100) / total);
    return 0;
}