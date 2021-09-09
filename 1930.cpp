#include <iostream>
 
using namespace std;
 
int main() {
    int t1, t2, t3, t4, tomadas = 0;
    cin >> t1 >> t2 >> t3 >> t4;
    tomadas = (t1 + t2 + t3 + t4) - 3;
    cout << tomadas << endl;
    return 0;
}