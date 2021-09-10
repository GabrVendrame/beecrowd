#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double value, X[100];
    for(int i = 0; i < 100; i++){
        cin >> value;
        X[i] = value;
        if(X[i] <= 10){
            cout << "A[" << i << "] = " << fixed << setprecision(1) << value << endl;
        }
    }
    return 0;
}