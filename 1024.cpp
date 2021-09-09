#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, tam;
    string msg;
    cin >> n;
    getc(stdin);
    for(int i = 0; i < n; i++){
        getline(cin, msg);
        tam = msg.size();
        for(int j = 0; j < tam; j++){
            if(msg[j] > 64 and msg[j] < 91 or msg[j] > 96 and msg[j] < 123){
                msg[j] += 3;
            }
        }
        reverse(msg.begin(), msg.end());
        for(int k = tam / 2; k <= tam; k++){
            msg[k] -= 1;
        }
        cout << msg << endl;
    }
    return 0;
}