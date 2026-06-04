#include<bits/stdc++.h> //<-- this one library includes all essential libraries like math.h, stringh.h, <utility>
using namespace std;


void exploreParameterisedRecursion(int n, int sum=0){
    if(n < 1){
        cout << "Summation of "<< n << " is - " << sum << endl;
        return;
    }
    exploreParameterisedRecursion(n-1, sum+n);
}

int exploreFunctionalRecursion(int n){
    if(n < 1){
        return 0;
    }
    return n + exploreFunctionalRecursion(n-1);
}

int factorialOfN(int n){
    if (n < 1) return 0;
    if(n == 1) return 1;

    return n * factorialOfN(n-1);
}


int fib(int n) {
    if (n <= 1) return n; // Base cases
    return fib(n - 1) + fib(n - 2); // Unfinished business: the '+' sign
}


int main(){
    // Recursion can be 2 forms parameterised way and functional way
    // parameterised -- passing direct parameters into function
    // functional -- use the function itself and return

    // print summation of n
    int n = 4;
    exploreParameterisedRecursion(n);

    cout << "Summation of "<< n << " using functional recursion is - " << exploreFunctionalRecursion(n) << endl;

    
    cout << "Factorial of "<< n << " using functional recursion is - " << factorialOfN(n) << endl;

    // Space and Time complexities
    // Mostly both have same time and space complexities
    // O(N) & O(N)
    // In optimized case in parameterised recursion only the space complexity can be O(1)

    // why space complexity is O(N)?
    // since each call waits for next call to complete, the memory of each function call is stored in stack until last one is done.


    // More functinal recursion prooblems
    fib(n);

    return 0;
}
