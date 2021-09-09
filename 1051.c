#include <stdio.h>

int main(){
    float salario, diff, tax;
    scanf("%f", &salario);
    if(salario <= 2000){
        printf("Isento\n");
    } else{
        if(salario > 2000 && salario <= 3000){
            diff = salario - 2000;
            tax = diff * 0.08;
        } else if(salario > 3000 && salario <= 4500){
            diff = salario - 3000;
            tax = (diff * 0.18) + 80;
        } else if(salario > 4500){
            diff = salario - 4500;
            tax = (diff * 0.28) + 350;
        }
        printf("R$ %.2f\n", tax);
    }
    return 0;
}