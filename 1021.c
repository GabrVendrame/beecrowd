#include <stdio.h>

int main(){
    int valor, decimal, resto;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    int moeda100, moeda50, moeda25, moeda10, moeda5, moeda1;
    scanf("%d.%d", &valor, &decimal);
    nota100 = valor / 100;
    resto = valor % 100;

    nota50 = resto / 50;
    resto = resto % 50;
    
    nota20 = resto/ 20;
    resto = resto % 20;
    
    nota10 = resto / 10;
    resto = resto % 10;
    
    nota5 = resto / 5;
    resto = resto % 5;
    
    nota2 = resto / 2;
    resto = resto % 2;

    moeda100 = resto / 1;

    moeda50 = decimal / 50;
    resto = decimal % 50;
    
    moeda25 = resto/ 25;
    resto = resto % 25;
    
    moeda10 = resto / 10;
    resto = resto % 10;
    
    moeda5 = resto / 5;
    resto = resto % 5;
    
    moeda1 = resto / 1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda100);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1);
    return 0;
}