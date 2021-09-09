#include <stdio.h>

int main(){
    int n, x, i, countin = 0, countout = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        if(x >= 10 && x <= 20){
            countin++;
        } else{
            countout++;
        }
    }
    printf("%d in\n", countin);
    printf("%d out\n", countout);
    return 0;
}