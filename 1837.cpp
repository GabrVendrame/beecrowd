#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a, b;
    
    cin >> a >> b;
    int q = abs(a / b), r = abs(a % b);
    if(r == 0) {
        cout << a / b << " " << r  << endl;
    } else if(a >= 0 and b > 0) {
        cout << q << " " << r  << endl;
    } else if(a >= 0 and b < 0) {
        cout << -q << " " << r  << endl;
    } else if(a < 0 and b > 0) {
        cout << -(q+1) << " " << b-r  << endl;
    } else {
        cout << q+1 << " " << abs(b)-r  << endl;
    }
    
    return 0;
}