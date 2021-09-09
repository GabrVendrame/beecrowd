#include <stdio.h>

int main(){
    int horaini, horafim, duracao, h;
    scanf("%d %d", &horaini, &horafim);
    if(horaini >= horafim){
        duracao = (horafim - horaini) + 24;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    } else{
        duracao = (horafim - horaini);
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    return 0;
}