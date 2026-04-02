#include<iostream>
using namespace std;

int main(){
    // Any Variable in C++ is lives in memory
    int x = 100;
    cout << "value of x: " << x << "\n";
    cout << "Address of x: " << &x << "\n";

    // Pointer = Variable that stores address of another variable.
    int *p = &x;
    // p stores address of x
    // *p means go to address of p and get the value

    cout << "Addess of p: "<< p << "\n";
    cout << "value of p: "<< *p << "\n";

    cout << "Changing the value of p to verify the effect of x;" << "\n";
    *p = 10;
    cout << "New value of x: " << x << "\n";
    cout << "New value of p: " << *p << "\n";


}