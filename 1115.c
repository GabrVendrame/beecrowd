#include <stdio.h>

int main(){
    int x, y, xouy = 1;
    while(xouy != 0){
        scanf("%d %d", &x, &y); 
        if(x == 0 || y == 0){
            xouy = 0;
        } else{
            if(x > 0 && y > 0){
                printf("primeiro\n");
            } else if(x < 0 && y > 0){
                printf("segundo\n");
            } else if(x < 0 && y < 0){
                printf("terceiro\n");
            } else if(x > 0 && y < 0){
                printf("quarto\n");
            }
        }
    }
    return 0;
}