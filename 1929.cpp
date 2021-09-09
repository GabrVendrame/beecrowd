#include <iostream>
#include <algorithm>

using namespace std;

int verificaTri(int a, int b, int c){
    if(a >= b + c){
        return 0;
    } else{
        return 1;
    }
}

int main(){
    int a, b, c, d;
    int val[4];
    for(int i = 0; i < 4; i++){
        cin >> val[i];
    }
    sort(val, val+4);
    if(verificaTri(val[2], val[1], val[0])){
        cout << 'S' << endl;
    } else{
        if(verificaTri(val[3], val[2], val[1])){
            cout << 'S' << endl;
        } else{
            cout << 'N' << endl;
        }
    }
    return 0;
}
