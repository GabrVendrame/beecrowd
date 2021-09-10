#include <iostream>

using namespace std;

int main(){
    int V, N[10];
    cin >> V;
    N[0] = V;
    cout << "N[0] = " << V << endl;
    for(int i = 1; i < 10; i++){
        N[i] = N[i - 1] * 2;
        cout << "N["<< i << "] = " << N[i] << endl;
    }
    return 0;
}