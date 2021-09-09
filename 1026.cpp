#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    unsigned int a, b;
    
    while(cin >> a) {
        cin >> b;
        cout << (a&(~b) | (~a)&b) << endl;
    }
    return 0;
}