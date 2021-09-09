#include <iostream>

using namespace std;

int main(){
    int t, PA, PB, anos;
    double G1, G2;
    cin >> t;
    for(int i = 0; i < t; i++){
        anos = 0;
        cin >> PA >> PB >> G1 >> G2;
        while(PB >= PA and anos <= 100){
            PA += PA * (G1/100);
            PB += PB * (G2/100);
            anos++;
        }
        if(anos <= 100){
            cout << anos << " anos." << endl;
        } else cout << "Mais de 1 seculo." << endl;
    }
    return 0;
}