#include <iostream>
#include <cstring>

using namespace std;

unsigned long long memo[61];

unsigned long long fibonacci(unsigned long long n){
    memo[0] = 0;
    memo[1] = 1; 
    for(int i = 2; i <= n; i++){
        memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n];
}

int main(){
    int n;
    unsigned long long fib;
    cin >> n;
    memset(memo, 0, sizeof(memo));
    for(int i = 0; i < n; i++){
        cin >> fib;
        if(memo[fib] != 0)
            cout << "Fib("<< fib <<") = " << memo[fib] << endl;
        else {
            cout << "Fib("<< fib <<") = " << fibonacci(fib) << endl;
        }
    }
    return 0;
}