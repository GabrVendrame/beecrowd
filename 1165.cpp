#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, x, i, ctrl;
    cin >> n;
    for(i = 0; i < n; i++){
        ctrl = 0;
        cin >> x;
        if(x % 2 == 0 and x != 2){
            ctrl = 1;
        } else{
            for(int j = 3; j <= sqrt(x); j+=2){
                if(x % j == 0){
                    ctrl = 1;
                    break;
                }
            }
        }
        if(ctrl == 1){
            cout << x << " nao eh primo" << endl;
        } else{
            cout << x << " eh primo" << endl;
        }
    }
    return 0;
}