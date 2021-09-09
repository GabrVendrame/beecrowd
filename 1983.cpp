#include <iostream>

using namespace std;

struct aluno{
    int matricula;
    float nota;
};

int main(){
    int n, pos = 0;
    float maior = 0;
    cin >> n;
    aluno melhor[n];
    for(int i = 0; i < n; i++){
        cin >> melhor[i].matricula >> melhor[i].nota;
        if(maior < melhor[i].nota){
            maior = melhor[i].nota;
            pos = i;
        }
    }
    if(maior < 8.0){
        cout << "Minimum note not reached" << endl;
    } else{
        cout << melhor[pos].matricula << endl;
    }
    return 0;
}