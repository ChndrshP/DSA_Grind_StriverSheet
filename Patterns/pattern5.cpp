#include <iostream>
using namespace std;

void pattern5(int n){
    for(int i = 0; i < n + 1; i++){
        for(int j = n; j > i; j--){
            cout << " *";
        }
        cout << endl;
    }
}

int main(){
    int n = 5;
    pattern5(n);

    return 0;
}

