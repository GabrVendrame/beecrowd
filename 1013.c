#include <stdio.h>

int main(){
    int a, b, c;
    int maiorab, maiorc;
    scanf("%d %d %d", &a, &b, &c);
    maiorab = (a + b + abs(a - b)) / 2;
    maiorc = (maiorab + c + abs(maiorab - c)) / 2;
    if(maiorab < maiorc){
        printf("%d eh o maior\n", maiorc);
    } else{
        printf("%d eh o maior\n", maiorab);
    }
    return 0;
}