#include <stdio.h>

int main(){
    int i, x;
    scanf("%d", &x);
    for(i = 1; i <= x && x <= 1000; i++){
        if(i % 2 != 0)
            printf("%d\n", i);
    }
    return 0;
}