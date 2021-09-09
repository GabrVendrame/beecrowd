#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int V;
    char hexa[1000];
    cin >> V;
    sprintf(hexa, "%X", V);
    cout << hexa << endl;
    return 0;
}