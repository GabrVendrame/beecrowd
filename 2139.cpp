#include <iostream>

using namespace std;

int main(){
    int dia, mes, ano;
    while(cin >> mes >> dia){
        switch(mes){
            case 1:
                ano = 360;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 2:
                ano = 329;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 3:
                ano = 300;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 4:
                ano = 269;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 5:
                ano = 239;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 6:
                ano = 208;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 7:
                ano = 178;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 8:
                ano = 147;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 9:
                ano = 116;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 10:
                ano = 86;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 11:
                ano = 55;
                cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                break;
            case 12:
                ano = 25;
                if(dia == 25){
                    cout << "E natal!" << endl;
                } else if(dia == 24){
                    cout << "E vespera de natal!" << endl;
                } else if(dia > 25){
                    cout << "Ja passou!" << endl;
                } else{
                    cout << "Faltam " << ano - dia << " dias para o natal!" << endl;
                }
                break;
        }
    }
    return 0;
}