#include <iostream>

using namespace std;

int main(){
    int m2 = 0, m3 = 0, m4 = 0, m5 = 0;
    int n, num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num % 2 == 0){
            m2++;
        }
        if(num % 3 == 0){
            m3++;
        }
        if(num % 4 == 0){
            m4++;
        }
        if(num % 5 == 0){
            m5++;
        }
    }
    cout << m2 << " Multiplo(s) de 2" << endl;
    cout << m3 << " Multiplo(s) de 3" << endl;
    cout << m4 << " Multiplo(s) de 4" << endl;
    cout << m5 << " Multiplo(s) de 5" << endl;
    return 0;
}