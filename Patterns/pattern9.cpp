#include <iostream>
using namespace std;


void pyramid1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4 - i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }
        for(int j = 0; j < 4 - i; j++){
            cout << " ";
        }
        cout << endl;
    }   
}

void pyramid2(int n){
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

void pattern9 (int n){
    pyramid1(n);
    pyramid2(n);
}

int main(){
    pattern9(5);
    return 0;
}