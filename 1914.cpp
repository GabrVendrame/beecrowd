#include <iostream>
 
using namespace std;
 
int main() {
    int tests, num, num2;
    string nome, esc, nome2, esc2;
    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> nome;
        cin >> esc;
        cin >> nome2;
        cin >> esc2;
        cin >> num >> num2;
        if((num + num2) % 2 == 0){
            if(esc == "PAR"){
                cout << nome << endl;
            } else{
                cout << nome2 << endl;
            }
        } else{
            if(esc == "IMPAR"){
                cout << nome << endl;
            } else{
                cout << nome2 << endl;
            }
        }
    }
    return 0;
}