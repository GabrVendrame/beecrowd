#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int n, quant, produtos;
    double valor = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> produtos >> quant;
        if(produtos == 1001){
            valor += quant * 1.50;
        } else if(produtos == 1002){
            valor += quant * 2.50;
        } else if(produtos == 1003){
            valor += quant * 3.50;
        } else if(produtos == 1004){
            valor += quant * 4.50;
        } else if(produtos == 1005){
            valor += quant * 5.50;
        }
    }
    cout << fixed << setprecision(2) << valor << endl;
    return 0;
}