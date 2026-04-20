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

    // back() // <<-- gets last element of vector
    cout << "last element of v2 using .back() " << v2.back() << "\n";

    // .clear() <<-- removes all elements from the vector
    cout << "before clear() size - " << v2.size() << "\n";
    v2.clear();
    cout << "after clear() size - " << v2.size() << "\n";

    
    // Iterating Vectors
    
    vector<int> v4 = {12, 13, 14, 15, 26};
    // basic index loop
    for (int i = 0; i < v4.size(); i++)
    {
        cout<< v4[i] << " ";
    }
    cout << endl;
    
    // Modern way
    for (int x : v4)
    {
        cout<< x << " ";
    }
    cout << endl;

    // Copy vector to another vector
    vector<int> v5(v4);
    cout << "size v5 copy of v4 - " << v5.size() << "\n";

    // **Iterators**
    // Another way of iterating vectors
    // Iterator -- and object that behaves like pointer to traverse and access elements of Container of STL like vector, list, map.
    // Iterator points to memory address rather than value
    vector<int>::iterator iterAdd = v5.begin();
    // exmpale memory addess of 1st index
    cout << ".begin() gets 1st index memory address - " << &iterAdd << "\n";
    // To access the value use *
    cout << "1st index value of v5 with iterators - " << *iterAdd << "\n";
    // or
    cout << "1st index value of v5 with iterators - " << *(iterAdd) << "\n";

    // ** elements in vector are stored in contiguous memory (continuous)
    // so just increase the memory address counter to access next element
    iterAdd++;
    cout << "2nd index value of v5 with iterators - " << *(iterAdd) << "\n";

    iterAdd+=2;
    cout << "4th index value of v5 with iterators - " << *(iterAdd) << "\n";

    // other iterators just to know basics --not used widely--
    vector<int>::iterator iterEnd = v5.end(); //<< -- Points address right after the end index, not at the end index
    iterEnd--;
    cout << "last index value of v5 with iterators - " << *(iterEnd) << "\n";
    
    // these below 2 are throwing errors, leaving it as not widely used
    // vector<int>::iterator iterREnd = v5.rend();
    // vector<int>::iterator iterRBegin = v5.rbegin();
    
    // Loop using iterators
    for(vector<int>::iterator it = v5.begin(); it != v5.end(); it++){
        cout << "element-" << *it << "\n";
    }
    cout << "---------" << "\n";

    // shortcut for above loop using auto
    for(auto it = v5.begin(); it < v5.end(); it++){
        cout << "element-" << *it << "\n";
    }
    cout << "---------" << "\n";

    // further more
    for(auto it : v5){ //<< -- here auto means automitically detect DType of vector, same as (int it : v5)
        cout << "element-" << it << "\n";
    }
    cout << "---------" << "\n";

    vector<char> v6 = {'i', 'j', 'k'};
    for(auto it : v6){ //<< -- here auto means automitically detect DType of vector, same as (char it : v5)
        cout << "element-" << it << "\n";
    }
    cout << "---------" << "\n";


    // other than iterators auto can be used as placeholder and automatically inherits the type of value is it is assigned to
    auto unknownDTypeFloat = 99.9;
    auto unknownDTypeString = "Anurag";
    cout << "auto can be helpful when Dtype is unknown - " << typeid(unknownDTypeFloat).name() << "\n";
    cout << "auto can be helpful when Dtype is unknown - " << typeid(unknownDTypeString).name() << "\n";

    // Delete from Vector

    vector<int> vd = {1, 2, 3, 4, 9, 10};
    cout << "vd: values before erase - " << endl;
    for(int xx : vd){
        cout << xx << " " ;
    }
    cout << "---------" << "\n";

    // .erase() take address of the index to be deleted as positional argument
    vd.erase(vd.begin());

    cout << "vd: values after erase - " << endl;
    for(int xx : vd){
        cout << xx << " " ;
    }
    cout << "---------" << "\n";

    // ------------- delete any index value ------------------
    vd.erase(vd.begin()+3);
    
    cout << "vd: values after erase 3rd index - " << endl;
    for(int xx : vd){
        cout << xx << " " ;
    }
    cout << "---------" << "\n";

    vector<int> vd2 = {11, 23, 34, 45, 56, 67};
    // delete range of elements [start, end]
    vd2.erase(vd2.begin()+1, vd2.begin()+4); // end = end + 1 (next) index value
    
    cout << "vd2: delete from index 1-3 - " << endl;
    for(int xx : vd2){
        cout << xx << " " ;
    }
    cout << "---------" << "\n";

    // --------------- Insert into vector any position/index ---------------------
    vector<int> vi1 = {10, 20, 40};
    vi1.insert(vi1.begin(), 1); // .insert(index, value)

    cout << "value inserted at start of vector: " << endl;
    for(int xx : vi1){
        cout << xx << " " ;
    }
    cout << "---------" << "\n";

    // .insert() multiple value / range at once
    // .insert(index, times, value)
    vi1.insert(vi1.begin()+3, 3, 30);

    cout << "Insert 30 3 times from index 3: " << endl;
    for(int xx : vi1){
        cout << xx << " " ;
    }
    cout << "---------" << "\n";

    // insert a vector into another vector
    vector<int>vi2 = {50, 60, 70, 80};
    // .insert(index, begin, end)
    vi1.insert(vi1.end(), vi2.begin(), vi2.end());

    cout << "Insert vi2 into vi1 vector at index end: " << endl;
    for(int xx : vi1){
        cout << xx << " " ;
    }
    cout << "---------" << "\n";
}
