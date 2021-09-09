#include <stdio.h>

int main(){
    int i, j = 7, aux;
    for(i = 1; i < 10; i+=2){
        for(aux = 0; aux < 3; aux++){
            printf("I=%d J=%d\n", i, j - aux);
        }
        j += 2;
    }
    return 0;
}