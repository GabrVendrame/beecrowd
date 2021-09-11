#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string palavra;
    int c, tam;
    cin >> c;
    for(int i = 0; i < c; i++){
        cin >> palavra;
        tam = palavra.size();
        cout << fixed << setprecision(2) << (tam * 0.01) << endl;
    }
    return 0;
}