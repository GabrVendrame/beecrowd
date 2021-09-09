#include <stdio.h>

int main(){
    int inter, gremio, opt = 0, interv = 0, gremiov = 0, empate = 0;
    do{
        scanf("%d %d", &inter, &gremio);
        if(inter > gremio){
            interv++;
        } else if(gremio > inter){
            gremiov++;
        } else{
            empate++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opt);
    } while(opt != 2);
    printf("%d grenais\n", interv + gremiov + empate);
    printf("Inter:%d\n", interv);
    printf("Gremio:%d\n", gremiov);
    printf("Empates:%d\n", empate);
    if(interv > gremiov){
        printf("Inter venceu mais\n");
    } else if(gremiov > interv){
        printf("Gremio venceu mais\n");
    } else{
        printf("Nao houve vencedor\n");
    }
    return 0;
}