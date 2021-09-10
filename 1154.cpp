#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float idade = 1, soma = 0, media = 0, quant = 0;
    cin >> idade;
    while(idade >= 0){
        soma += idade;
        quant++;
        cin >> idade;
    }
    media = soma / quant;
    cout << fixed << setprecision(2) << media << endl;
    return 0;
}