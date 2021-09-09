#include <iostream>

using namespace std;

int main(){
    int N[20], value;
    for(int i = 0; i < 20; i++){
        cin >> N[19-i];
    }
    for(int i = 0; i < 20; i++){
        cout << "N["<< i <<"] = " << N[i] << endl;
    }
    return 0;
}