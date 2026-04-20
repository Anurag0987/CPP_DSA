#include<bits/stdc++.h> //<-- this one library includes all essential libraries like math.h, stringh.h, <utility>
using namespace std;

// STL is a built-in library in C++ that provides efficient, ready-to-use Data Structures and tools/algos to help development.

// C++ STL is divided into 4 parts
// 1. Algorithms <- like .sort(), .reverse(), .find() etc..
// 2. Containers <- ways to store data like, vector, set, map etc..
// 3. Functions 
// 4. Iterators

// <utility> <-- Part of STL, basically provides some important helper features
int main(){
    // Pair <-- like tuple in python, contains 2 elements/object in {ele1, ele2}, can be nested
    pair<int, int> a = {1, 9};
    cout << "Pair1: " << a.first << " Pair2: " << a.second;
    cout << endl;

    // can have different data types
    pair<int, string> personInfo = {25, "Jhon Doe"};
    cout << "Age: " << personInfo.first << " Name: " << personInfo.second;
    cout << endl;

    // nested
    pair<int, pair<int, char>> nestedInfo = {1, {22, 'A'}};
    cout << "One-one: " << nestedInfo.first << " Two-one: " << nestedInfo.second.first << " Two-two: " << nestedInfo.second.second;
    cout << endl;

    // Array Pair
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout<< "Array-one-one: " << arr[0].first;
    cout<< endl;
    cout<< "Array-three-two: " << arr[2].second;
    //cout << arr[0]; this does not work as "cout <<" perator is only designed to print int, float, char, string.
    // so it don't know how to print a pair {obj1, obj2}
    // so this throws error. To make this work we need to do operator overloading of "<<" operator.
}
