#include <iostream>
using namespace std;

void pattern4(int n){
    for(int i = 1; i < n + 1 ; i++){
        for(int j = 0; j < i ; j++){
            cout << " " << i;
        }
        cout << endl;
    }
}

int main(){
    int n = 5;
    pattern4(n);

    return 0;
}

