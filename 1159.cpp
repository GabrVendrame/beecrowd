#include <iostream>

using namespace std;

int main(){
    int x, soma;
    cin >> x;
    while(x != 0){
        soma = 0;
        if(x % 2 != 0){
            x += 1;
        }
        for(int i = 0; i < 5; i++){
            soma += x;
            x+=2;
        }
        cout << soma << endl;
        cin >> x;
    }
}