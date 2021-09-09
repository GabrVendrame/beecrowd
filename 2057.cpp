#include <iostream>

using namespace std;

int main(){
    int saida, travel, fuso;
    cin >> saida >> travel >> fuso;
    if((saida + travel) + fuso > 24){
        cout << (saida + travel) + fuso - 24 << endl;
    } else if((saida + travel) + fuso < 0){
        cout << (saida + travel) + fuso + 24 << endl;
    } else if((saida + travel) + fuso == 24){
        cout << 0 << endl;
    } else{
        cout << (saida + travel) + fuso << endl;
    }
    return 0;
}