#include<bits/stdc++.h> //<-- this one library includes all essential libraries like math.h, stringh.h, <utility>
using namespace std;

// Lists
void exploreList(){
    // Similar to vectors, but has direct front function
    // which is more efficient in time complixity when compared to insert in vectors

    list<int> l1 = {1, 2};
    cout << "elements of list l1: ";
    for(int x : l1){
        cout << " # " << x ;
    }
    cout << "\n";

    l1.push_back(3);
    l1.emplace_back(4);

    // push_front function much more efficient
    l1.push_front(-1);
    l1.emplace_front(-3);
    
    cout << "elements of list l1: ";
    for(int x : l1){
        cout << " # " << x ;
    }
    cout << "\n";

    // rest functions are all same like vector
    // insert, erase, begin, end, rend, rbegin. clear, empty, size, swap
    // always remember begin, end give addresses not the value
    cout << "begin of list : " << *l1.begin();
    cout << "\n";
    cout << "size of list : " << l1.size();
    cout << "\n";

    // l1.erase(l1.begin()+1); <-- this +1 indexing won't work for list, set, map, But works for array, deque, vectors 
    l1.erase(l1.begin());

    cout << "elements of list l1: ";
    for(int x : l1){
        cout << " * " << x ;
    }
    cout << "\n";

    l1.erase(l1.begin(), l1.end());
    
    cout << "is of list l1 empty: " << l1.empty();
    cout << "\n";

    // Insert
    list<int>l2 = {11, 22, 33};
    // again l1.insert(l1.begin()+1, 16); <-- +1 won't work
    l2.insert(l2.begin(), 16);

    cout << "elements of list l2: ";
    for(int x : l2){
        cout << " * " << x ;
    }
    cout << "\n";

}

int main(){
    exploreList();
}