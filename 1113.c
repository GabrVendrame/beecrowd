#include <stdio.h>

int main(){
    int x, y, igual = 1;
    while(igual != 0){
        scanf("%d %d", &x, &y);
        if(x == y){
            igual = 0;
        } else{
            if(x > y){
                printf("Decrescente\n");
            } else{
                printf("Crescente\n");
            }
            igual++;
        }
    }
    return 0;
}