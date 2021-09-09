#include <iostream>
#include <iomanip>

using namespace std;
 
int main(){
    int i, j, cont = 0;
    float mat[12][12], soma = 0;
    char opt;
    cin >> opt;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> mat[i][j];
            if(j < 11 - i){
                soma += mat[i][j];
                cont++;
            }
        }
    }
    if(opt == 'S'){
        cout << fixed << setprecision(1) << soma << endl;
    } else if(opt == 'M'){
        cout << fixed << setprecision(1) << soma / cont << endl;
    }
    return 0;
}