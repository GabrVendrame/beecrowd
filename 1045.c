#include <stdio.h>

int main(){
    double A, B, C, maior;
    scanf("%lf %lf %lf", &A, &B, &C);
    if(A < B){
        maior = B;
        B = A;
        A = maior;
    }
    if(A < C){
        maior = C;
        C = A;
        A = maior;
    }
    if(B < C){
        maior = C;
        C = B;
        B = maior;
    }
    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    } else{
        if((A*A) == (B*B) + (C*C)){
            printf("TRIANGULO RETANGULO\n");
        }
        if((A*A) > (B*B) + (C*C)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((A*A) < (B*B) + (C*C)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(A == B && A == C){
            printf("TRIANGULO EQUILATERO\n");
        } else if(A == B || A == C || B == C){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}