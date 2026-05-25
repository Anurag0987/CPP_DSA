#include<bits/stdc++.h> //<-- this one library includes all essential libraries like math.h, stringh.h, <utility>
using namespace std;


void recursionBackTracking1toN(int n){
    if(n < 1) return;
    recursionBackTracking1toN(n-1);
    cout << "Value of N - " << n << endl; // <-- 1st Print is executed at last
    // ex: initial n value = 4, then n-1 => 3, then n-1 => 2, then n-1 => 1, then n-1 => 0
    // But the print order is 1, 2, 3, 4
    // Because the cout is called after the fn() call, so last function line will be execture first 
    // and return's to last-1 function which executes it's cout and return's last-2 so on..
    // This is called ****Backtracking****
}

void recursionBackTrackingNto1(int n, int i=0){
    i++;
    if(n < 1) return;
    recursionBackTrackingNto1(n-1, i);
    cout << "Value of N - " << i << endl; // <-- 1st Print is executed at last
}

int main(){
    // Problem Statement - Print 1 - N using recursion and *Backtracking*
    int n;
    cin >> n;

    // recursionBackTracking1toN(n);

    // Problem Statement - Print N - 1 using recursion and *Backtracking*
    recursionBackTrackingNto1(n);
}