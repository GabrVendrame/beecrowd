#include <iostream>
 
using namespace std;
 
int main() {
    int n, forca;
    string nome;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> nome >> forca;
        if(nome == "Thor"){
            cout << "Y" << endl;
        } else{
            cout << "N" << endl;
        }
    }
    return 0;
}