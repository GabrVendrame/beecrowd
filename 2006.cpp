#include <iostream>

using namespace std;

int main(){
    int tipo, esc, cont = 0;
    cin >> tipo;
    for(int i = 0; i < 5; i++){
        cin >> esc;
        if(esc == tipo){
            cont++;
        }
    }
    cout << cont << endl;
    return 0;
}