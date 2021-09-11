#include <iostream>
 
using namespace std;
 
int main() {
    int l, vel, maior, nivel = 0;
    while(cin >> l){
        maior = 0;
        for(int i = 0; i < l; i++){
            cin >> vel;
            if(maior < vel){
                maior = vel;
            }
        }
        if(maior < 10){
            nivel = 1;
        } else if(maior >= 10 and maior < 20){
            nivel = 2;
        } else if(maior >= 20){
            nivel = 3;
        }
        cout << nivel << endl;
    }
    return 0;
}