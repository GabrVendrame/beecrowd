#include <iostream>
 
using namespace std;
 
int main() {
    int n, t, menor = 100000, pos;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t;
        if(menor > t){
            menor = t;
            pos = i;
        }
    }
    cout << pos << endl;
    return 0;
}