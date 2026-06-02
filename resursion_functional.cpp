#include<bits/stdc++.h> //<-- this one library includes all essential libraries like math.h, stringh.h, <utility>
using namespace std;


void exploreParameterisedRecursion(int n, int sum=0){
    if(n < 1){
        cout << "Summation of "<< n << " is - " << sum << endl;
        return;
    }
    exploreParameterisedRecursion(n-1, sum+n);
}


int main(){
    // Recursion can be 2 forms parameterised way and functional way
    // parameterised -- passing direct parameters into function
    // functional -- use the function itself and return

    // print summation of n
    exploreParameterisedRecursion(3);

    return 0;
}
