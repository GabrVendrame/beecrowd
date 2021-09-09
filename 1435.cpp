#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int mat[n][n];
    while(n != 0){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                mat[i][j] = i+j;
                if(j == n) 
                    cout << mat[i][j] << endl;
                else 
                    cout << mat[i][j] << "   ";
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }
    return 0;
}