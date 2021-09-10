#include <iostream>

using namespace std;

int main(){
    int X[10];
    for(int i = 0; i < 10; i++){
        cin >> X[i];
    }
    int j = 0;
    for(auto i : X){
        cout << "X["<< j++ << "] = " ;
        if(i <= 0){
            cout << 1 << endl;
        } else{
            cout << i << endl;
        }
    }
    return 0;
}