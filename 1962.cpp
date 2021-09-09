#include <iostream>

using namespace std;

int main(){
    int n, t;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(2015 - t > 0){
            cout << abs(t - 2015) << " D.C." << endl;
        } else if(2015 - t == 0){
            cout << 1 << " A.C." << endl;
        } else{
            cout << abs(t - 2015) + 1 << " A.C." << endl;
        }
    }
    return 0;
}