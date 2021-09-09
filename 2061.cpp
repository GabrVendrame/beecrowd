#include <iostream>

using namespace std;

int main(){
    int abas, n;
    string actions;
    cin >> abas >> n;
    for(int i = 0; i < n; i++){
        cin >> actions;
        if(actions == "fechou"){
            abas += 1;
        } else{
            abas--;
        }
    }
    cout << abas << endl;
}