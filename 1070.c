#include <stdio.h>

int main(){
    int i, x, aux = 0;
    scanf("%d", &x);
    for(i = x; aux < 6; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
            aux++;
        }
    }
    return 0;
}