#include <iostream>
#include <cmath>

using namespace std;

int transformaBin(string binario){
    int total = 0;
    for(int i = 0; i < 3; i++){
        if(binario[i] == '*'){
            total += pow(2, 2 - i);
        }
    }
    return total;
}

int main() {
    string entrada;
    int contaScream = 0, numero = 0;
    while(contaScream < 3){
        cin >> entrada;
        if(entrada == "caw"){
            cin >> entrada;
            contaScream++;
            cout << numero << endl;
            numero = 0;
        } else{
            numero += transformaBin(entrada);
        }
    }
    return 0;
}