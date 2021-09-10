#include <stdio.h>

int main(){
    int fuel, alcohol = 0, gasoline = 0, diesel = 0;
    do{
        scanf("%d", &fuel);
        if(fuel == 1){
            alcohol++;
        } else if(fuel == 2){
            gasoline++;
        } else if(fuel == 3){
            diesel++;
        }
    } while(fuel != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);
    return 0;
}