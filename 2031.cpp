#include <iostream>

using namespace std;

int main(){
    int n;
    string opt1, opt2;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> opt1 >> opt2;
        if(opt1 == "ataque" and opt2 == "pedra"){
            cout << "Jogador 1 venceu" << endl;
        } else if(opt1 == "pedra" and opt2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        } else if(opt1 == "papel" and opt2 == "ataque"){
            cout << "Jogador 1 venceu" << endl;
        } else if(opt1 == "papel" and opt2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        } else if(opt1 == "pedra" and opt2 == "pedra"){
            cout << "Jogador 1 venceu" << endl;
        } else if(opt1 == "ataque" and opt2 == "ataque"){
            cout << "Jogador 1 venceu" << endl;
        }
    }
    return 0;
}