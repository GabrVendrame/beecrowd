#include <bits/stdc++.h>

using namespace std;

int memo[46];

void fibonacci(int n){
    memo[0] = 0;
    memo[1] = 1; 
    for(int i = 2; i < n; i++){
        memo[i] = memo[i-1] + memo[i-2];
    }
    for(int i = 0; i < n - 1; i++){
        cout << memo[i] << " ";
    }
    cout << memo[n-1] << endl;
}

int main(){
    int n, i;
    cin >> n;
    fibonacci(n);
    return 0;
}