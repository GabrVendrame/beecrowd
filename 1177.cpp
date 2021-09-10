#include <iostream>
 
using namespace std;
 
int main() {
    int T, j = 0, vector[1000];
    cin >> T;
    for(int i = 0; i < 1000; i++){
        if(j < T){
            vector[i] = j;
            j++;
        }
        if(j == T) 
            j = 0;
        cout << "N[" << i << "] = " << vector[i] << endl;
    }
    return 0;
}