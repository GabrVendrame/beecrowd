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
    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }
    if((A*A) == (B*B) + (C*C)){
        printf("TRIANGULO RETANGULO\n");
    }
    if((A*A) > (B*B) + (C*C)){
        if(A == B || A == C || B == C){
            printf("TRIANGULO OBTUSANGULO\n");
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    if((A*A) < (B*B) + (C*C)){
        if(A == B || A == C || B == C){
            printf("TRIANGULO ACUTANGULO\n");
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    if(A == B && A == C){
        if((A*A) < (B*B) + (C*C)){
            printf("TRIANGULO ACUTANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
    }
    return 0;
}