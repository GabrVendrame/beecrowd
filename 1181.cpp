#include <iostream>
#include <iomanip>

using namespace std;
 
int main(){
    int l;
    float M[12][12], soma = 0;
    char opt;
    cin >> l >> opt;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }
    for(int i = 0; i < 12; i++){
        soma += M[l][i];
    }
    if(opt == 'S'){
        cout << fixed << setprecision(1) << soma << endl;
    } else{
        cout << fixed << setprecision(1) << soma / 12 << endl;
    }
    return 0;
}