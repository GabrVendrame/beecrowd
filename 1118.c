#include <stdio.h>

int main(){
    float n1, n2, media;
    int opt;
    char resp;
    do{
        scanf("%f", &n1);
        while(n1 < 0 || n1 > 10){
            printf("nota invalida\n");
            scanf("%f", &n1);
        }
        scanf("%f", &n2);
        while(n2 < 0 || n2 > 10){
            printf("nota invalida\n");
            scanf("%f", &n2);
        }
        media = (n1 + n2) / 2;
        printf("media = %.2f\n", media);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &opt);
        while(opt > 2 || opt < 0){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opt);
        }
    } while(opt != 2);
    return 0;
}