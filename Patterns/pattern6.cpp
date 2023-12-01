#include <iostream>
using namespace std;

void pattern6(int n){
    for(int i = 0; i < n+1; i++){
        for(int j = 1; j < n - i +1; j++){
            cout <<  " " << j;
        }
        cout << endl;
    }     
}


int main(){
    int n = 5;
    pattern6(n);

    return 0;
}


