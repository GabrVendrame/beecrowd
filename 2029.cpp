#include <iostream>
#include <iomanip>

#define pi 3.14

using namespace std;

int main(){
    double vol, diameter, areab, altura, raio;
    while(cin >> vol >> diameter){
        raio = diameter / 2.00;
        areab = pi * (raio * raio);
        altura = vol / areab;
        cout << "ALTURA = " << fixed << setprecision(2) << altura << endl;
        cout << "AREA = " << fixed << setprecision(2) << areab << endl;
    }
    return 0;
}