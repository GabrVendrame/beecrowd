#include <iostream>
#include <vector> 

using namespace std;
 
int main(){
    int N, pos, menor = 2147483647;
    cin >> N;
    int X[N];
    for(int i = 0; i < N; i++){
        cin >> X[i];
        if(menor > X[i]){
            menor = X[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << menor << "\n" << "Posicao: " << pos << endl;
    return 0;
}