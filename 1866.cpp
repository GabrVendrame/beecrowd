#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
    int test, n, soma;
    cin >> test;
    for(int i = 0; i < test; i++){
        soma = 0;
        cin >> n;
        for(int j = 1; j <= n; j++){
            soma += pow(-1, j - 1);
        }
        cout << soma << endl;
    }
    return 0;
}