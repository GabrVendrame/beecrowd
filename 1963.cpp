#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float val1, val2, pct;
    cin >> val1 >> val2;
    pct = ((val2 - val1) * 100.00) / val1;
    cout << fixed << setprecision(2) << floor(pct) << "%" << endl;
    return 0;
}