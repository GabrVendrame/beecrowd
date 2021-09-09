#include <stdio.h>
 
int main() {
    int i, count = 0;
    float num, soma, media;
    for(i = 0; i < 6; i++){
        scanf("%f", &num);
        if(num > 0){
            count++;
            soma = (soma + num);
        }
    }
    media = soma / count;
    printf("%d valores positivos\n", count);
    printf("%.1f\n", media);
    return 0;
}