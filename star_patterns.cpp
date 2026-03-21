#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << j+1;
        }
        cout << "\n";
    }
}

void pattern4(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << i+1;
        }
        cout << "\n";
    }
}

void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << '*';
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    pattern5(n);
    return 0;
}