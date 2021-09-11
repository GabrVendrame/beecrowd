#include <iostream>

using namespace std;

int main(){
    int n, hora, min, ocorrencia;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> hora >> min >> ocorrencia;
        if(ocorrencia == 1){
            if(hora < 10 and min < 10){
                cout << "0" << hora << ":0" << min << " - " << "A porta abriu!" << endl;
            } else if(hora < 10){
                cout << "0" << hora << ":" << min << " - " << "A porta abriu!" << endl;
            } else if(min < 10){
                cout << hora << ":0" << min << " - " << "A porta abriu!" << endl;
            } else{
                cout << hora << ":" << min << " - " << "A porta abriu!" << endl;
            }
        } else{
            if(hora < 10 and min < 10){
                cout << "0" << hora << ":0" << min << " - " << "A porta fechou!" << endl;
            } else if(hora < 10){
                cout << "0" << hora << ":" << min << " - " << "A porta fechou!" << endl;
            } else if(min < 10){
                cout << hora << ":0" << min << " - " << "A porta fechou!" << endl;
            } else{
                cout << hora << ":" << min << " - " << "A porta fechou!" << endl;
            }
        }
    }
    return 0;
}