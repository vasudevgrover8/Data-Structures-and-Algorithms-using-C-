#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2*n - 2*i + 1; j++){
            cout << "*";
        }
        for(int j = 1; j <= i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    pattern8(5);
    return 0;
}