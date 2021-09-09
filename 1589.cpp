#include <iostream>
 
using namespace std;
 
int main() {
    int r1, r2, n, R = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> r1 >> r2;
        R = r1 + r2;
        cout << R << endl;
    }
    return 0;
}