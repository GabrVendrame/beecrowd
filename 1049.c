#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[50], palavra2[50], palavra3[50];
    scanf("%s %s %s", palavra1, palavra2, palavra3);
    if(strcmp(palavra1, "vertebrado") == 0){
        if(strcmp(palavra2, "ave") == 0){
            if(strcmp(palavra3, "carnivoro") == 0){
                printf("aguia\n");
            } else{
                printf("pomba\n");  
            }
        } else{
            if(strcmp(palavra3, "onivoro") == 0){
                printf("homem\n");
            } else{
                printf("vaca\n");
            }
        }
    } else{
        if(strcmp(palavra2, "inseto") == 0){
            if(strcmp(palavra3, "hematofago") == 0){
                printf("pulga\n");
            } else{
                printf("lagarta\n");
            }
        } else{
            if(strcmp(palavra3, "hematofago") == 0){
                printf("sanguessuga\n");
            } else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}