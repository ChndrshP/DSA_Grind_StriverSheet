#include <iostream>
using namespace std;

void pattern1(int n){
        for(int i = 0 ; i < n; i++){
            for(int i = 0; i < n; i++){
            cout<< "* ";
        }   
        cout << endl;     
    }
}

int main(){
    int n = 5;
    pattern1(n);


    return 0;
}