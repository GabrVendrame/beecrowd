#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double V, N[100];
    cin >> V;
    N[0] = V;
    cout << "N[0] = " << fixed << setprecision(4) << V << endl;
    for(int i = 1; i < 100; i++){
        N[i] = N[i - 1] / 2;
        cout << "N["<< i << "] = " << fixed << setprecision(4) << N[i] << endl;
    }
    return 0;
}