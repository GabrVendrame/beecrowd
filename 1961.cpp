#include <iostream>

using namespace std;

int main(){
    int jump, cano, win = 1, diff;
    cin >> jump >> cano;
    int altura[cano];
    for(int i = 0; i < cano; i++){
        cin >> altura[i];
    }
    for(int i = 0; i < cano - 1; i ++){
        diff = abs(altura[i + 1] - altura[i]);
        if(diff > jump){
            win = 0;
        }
    }
    if(win != 0){
        cout << "YOU WIN" << endl;
    } else{
        cout << "GAME OVER" << endl;
    }
    return 0;
}