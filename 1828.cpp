#include <iostream>
#include <cstring>
 
using namespace std;
 
int main() {
    int n, sw = 0;
    char sheldon[10], raj[10];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> sheldon >> raj;
        if(strcmp(sheldon, raj) == 0){
            cout << "Caso #" << i << ": De novo!" << endl;
        } else{
            if(strcmp(sheldon, "tesoura") == 0 and strcmp(raj, "papel") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else if(strcmp(sheldon, "tesoura") == 0 and strcmp(raj, "lagarto") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else if(strcmp(sheldon, "papel") == 0 and strcmp(raj, "pedra") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else if(strcmp(sheldon, "papel") == 0 and strcmp(raj, "Spock") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else if(strcmp(sheldon, "pedra") == 0 and strcmp(raj, "lagarto") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else if(strcmp(sheldon, "pedra") == 0 and strcmp(raj, "tesoura") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else if(strcmp(sheldon, "lagarto") == 0 and strcmp(raj, "Spock") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else if(strcmp(sheldon, "lagarto") == 0 and strcmp(raj, "papel") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else if(strcmp(sheldon, "Spock") == 0 and strcmp(raj, "tesoura") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            }
            else if(strcmp(sheldon, "Spock") == 0 and strcmp(raj, "pedra") == 0){
                cout << "Caso #" << i << ": Bazinga!" << endl;
            } else{
                cout << "Caso #" << i << ": Raj trapaceou!" << endl;
            }
        }
    }
    return 0;
}