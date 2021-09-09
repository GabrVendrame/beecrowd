#include <iostream>

using namespace std;

int main() {

    float base = 1;
    for(float i = 0;i <=2.1;i += 0.2) {
        for(float j = 0;j < 3;j++) {
            cout << "I=" << i << " J=" << base+j << "\n";
        }
        base += 0.2;
    }
    
    return 0;
}