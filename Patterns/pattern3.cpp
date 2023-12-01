#include <iostream>
using namespace std;

void pattern3(int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < i + 2 ; j++){
            cout << " " << j;
        }
        cout << endl;
    }
}

int main(){
    int n = 5;
    pattern3(n);

    return 0;
}

