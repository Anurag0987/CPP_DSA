#include<bits/stdc++.h> //<-- this one library includes all essential libraries like math.h, stringh.h, <utility>
using namespace std;

// STL is a built-in library in C++ that provides efficient, ready-to-use Data Structures and tools/algos to help development.

// C++ STL is divided into 4 parts
// 1. Algorithms <- like .sort(), .reverse(), .find() etc..
// 2. Containers <- ways to store data like, vector, set, map etc..
// 3. Functions 
// 4. Iterators

// containers - Vector
int main(){
    // A Vector is dynamic Array, can add, remove elements without any fixed size
    vector<int> v1;

    // Add elements to vector 
    // v1[0] = 12; <-- Wrong won't work
    v1.push_back(12);
    v1.push_back(23);
    v1.push_back(34);

    vector<char> charVector = {'a', 'b', 'c', 'd'};

    cout<< charVector[0] << "\n";
    
    // safer way to access vector <- throws out_of_range error is vector size if out
    // unlike v1[5] which prints garbase value
    // used less
    cout << v1.at(2) << "\n";
    // cout << v1.at(5) << "\n"; <<- throws run time error
    
    // know size
    cout << "size of vector v1: " << v1.size() << "\n";

    // Pair vector
    vector<pair<int, int>> pv1 = {{1, 2}, {3, 4}};
    cout << "print pair vector first: " << pv1[0].first << "\n";
    pv1.push_back({11, 99}); // <<-- only in pairs
    // *Faster and efficient* way to push elements to vector
    pv1.emplace_back(55, 66); // <-- no need of {} when using emplace back in case of pushing objects
    // can also use emplace back on normal data types
    v1.emplace_back(8); // <<- no much difference than .push_back() for simple data types

    // .push_back() vs .emplace_back()
    // push_back - initial creats temporary copys of object/value and copy/move to vector 
    // emplace_back - diectly creates object/value inside vector -- so faster
    // real difference -- pair, class, struct
    // for int, char, float, -- almost same speed

    // dVarious ways of initializing vector;
    vector<int> vec1;
    vector<int> vec2(5); // creates vector with initial size 5, fills values with 0
    cout << vec2[0] << ", " << vec2[1] << ", " << vec2[4] << ", " << "\n";
    vector<int> vec3(5, 89); // creates vector with size 5, fills values with 89
    cout << vec3[0] << ", " << vec3[1] << ", " << vec3[4] << ", " << "\n";

    // some useful functions
    vector<int> v2 = {1, 2, 3, 4, 5};
    
    // pop_back() <-- remove last element
    cout << "before pop_back() size - " << v2.size() << "\n";
    v2.pop_back();
    cout << "after pop_back() size - " << v2.size() << "\n";
    
    // .empty() <<-- return true if vector is empty
    vector<int> v3;
    cout << "v2 has elements empty() check - " << v2.empty() << "\n";
    cout << "v3 has no elements empty() check - " << v3.empty() << "\n";

    // .clear() <<-- removes all elements from the vector
    cout << "before clear() size - " << v2.size() << "\n";
    v2.clear();
    cout << "after clear() size - " << v2.size() << "\n";
    
}
