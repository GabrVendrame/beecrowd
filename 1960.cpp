#include <iostream>
 
using namespace std;
 
int main() {
    int pag, resto = 0;
    cin >> pag;
    while(pag != 0){
        if(pag < 1000 and pag >= 500){
            if(pag >= 900){
                cout << "CM";
                pag -= 900;
            } else{
            cout << "D";
            pag -= 500;
            }
        }
        if(pag < 500 and pag >= 100){
            if(pag >= 400){
                cout << "CD";
                pag -= 400;
            } else{
                cout << "C";
                pag -= 100;
            }
        }
        if(pag < 100 and pag >= 50){
            if(pag >= 90){
                cout << "XC";
                pag -= 90;
            } else{
                cout << "L";
                pag -= 50;
            }
        }
        if(pag < 50 and pag >= 10){
            if(pag >= 40){
                cout << "XL";
                pag -= 40;
            } else{
                cout << "X";
                pag -= 10;
            }
        }
        if(pag < 10 and pag >= 5){
            if(pag >= 9){
                cout << "IX";
                pag -= 9;
            } else{
                cout << "V";
                pag -= 5;
            }
        }
        if(pag < 5 and pag >= 1){ 
            if(pag >= 4){
                cout << "IV";
                pag -= 4;
            } else{
                cout << "I";
                pag -= 1;
            }
        }
    }
    cout << endl;
    return 0;
}