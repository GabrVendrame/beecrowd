#include <iostream>

using namespace std;

int main(){
    int n;
    string player1, player2;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> player1 >> player2;
        if(player1 == "ataque" and player2 == "pedra"){
            cout << "Jogador 1 venceu" << endl;
        } else if(player1 == "pedra" and player2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        } else if(player1 == "ataque" and player2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        } else if(player1 == "papel" and player2 == "papel"){
            cout << "Ambos venceram" << endl;
        } else if(player1 == "pedra" and player2 == "pedra"){
            cout << "Sem ganhador" << endl;
        } else if(player1 == "ataque" and player2 == "ataque"){
            cout << "Aniquilacao mutua" << endl;
        } else{
            cout << "Jogador 2 venceu" << endl;
        }
    }
    return 0;
}