#include <iostream>

using namespace std;

int main(){
    int n, passed = 0, pos = 0;
    long long sheeps = 0;
    cin >> n;
    int stars[n], visited[n];
    for(int i = 0; i < n; i++){
        cin >> stars[i];
        sheeps += stars[i];
    }
    while(pos < n){
        if(stars[pos] == 0){
            visited[pos] = 1;
            pos--;
        } else {
            if(stars[pos] % 2 == 0){
                stars[pos]--;
                sheeps--;
                visited[pos] = 1;
                pos--;
            } else{
                stars[pos]--;
                sheeps--;
                visited[pos] = 1;
                pos++;
            }
        }
        if(pos < 0){
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(visited[i] == 1){
            passed++;
        }
    }
    cout << passed << " " << sheeps << endl;
    return 0;
}