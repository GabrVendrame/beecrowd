#include <stdio.h>

int main(){
    int x, y, i , j, aux = 1;
    scanf("%d %d", &x, &y);
    for(i = 1; i <= y/x; i++){
        for(j = 1; j <= x; j++){
            if(j == x){
                printf("%d", aux);
                aux++;
            } else{
                printf("%d ", aux);
                aux++;
            }
        }
        printf("\n");
    }
    return 0;
}