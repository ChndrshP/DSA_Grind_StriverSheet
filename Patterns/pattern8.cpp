#include <iostream>
using namespace std;

void pattern8(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < 9-2*i; j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    pattern8(5);
    
    return 0;
}