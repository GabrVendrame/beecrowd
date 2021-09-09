#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float soma = 0, j = 0;
    for(float i = 1; i <= 39; i+=2){
        soma += (i/pow(2, j++));
    }
    cout << fixed << setprecision(2) << soma << endl;
    return 0;
}