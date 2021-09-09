#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    int i, value, cont;
    vector <int> par, impar;
    for(i = 0; i < 15; i++){
        cin >> value;
        if(value % 2 == 0){
            par.push_back(value);
        } else{
            impar.push_back(value);
        }
        if(par.size() == 5){
            cont = 0;
            for(auto j: par){
                cout << "par[" << cont << "] = " << j << endl;
                cont++;
            }
            par.erase(par.begin(), par.end());
        } else if(impar.size() == 5){
            cont = 0;
            for(auto j: impar){
                cout << "impar[" << cont << "] = " << j << endl;
                cont++;
            }
            impar.erase(impar.begin(), impar.end());
        }
    }
    cont = 0;
    for(auto j: impar){
        cout << "impar[" << cont << "] = " << j << endl;
        cont++;
    }
    cont = 0;
    for(auto j: par){
        cout << "par[" << cont << "] = " << j << endl;
        cont++;
    }
    return 0;
}