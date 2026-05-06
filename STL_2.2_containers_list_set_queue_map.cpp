#include<bits/stdc++.h> //<-- this one library includes all essential libraries like math.h, stringh.h, <utility>
using namespace std;

// Indexing allowed in 
//    - Vector, deque, array
// Indexing Not allowed in
//    - List, stack, set, map

// Lists
void exploreList(){
    // Similar to vectors, but has direct front function
    // No Indexing - Internal structure is double linked list unlike vector which is dynamic array
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
        cout << " # " << x ;
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
        cout << " # " << x ;
    }
    cout << "\n";

}

void exploreDeque(){
    // similar to vector and list
    // It's a double ended, can insert access elements from both sides
    // has pop_back, pop_front, back(), front() which are efficient in time complexity O(1)
    deque<int> d1 = {10, 11, 12, 13};

    cout << "indexing is allowed in deque: " << d1[0] << "\n";
    cout << "elements of deque d1: ";
    for(int x : d1){
        cout << " # " << x ;
    }
    cout << "\n";
    d1.push_back(14);
    d1.emplace_back(15);

    d1.push_front(9);
    d1.emplace_front(8);
    
    cout << "elements of deque d1: ";
    for(int x : d1){
        cout << " # " << x ;
    }
    cout << "\n";
    
    // 
    d1.pop_front();
    cout << "elements of deque after pop_front d1: ";
    for(int x : d1){
        cout << " # " << x ;
    }
    cout << "\n";

    d1.pop_back();
    cout << "elements of deque after pop_back d1: ";
    for(int x : d1){
        cout << " # " << x ;
    }
    cout << "\n";

    cout << "back element iof deque d1: " << d1.back();
    cout << "\n";

    cout << "front element iof deque d1: " << d1.front();
    cout << "\n";

    cout << "size of deque d1 : " << d1.size();
    cout << "\n";

    // rest functions are same
    // empty, begin, end, erase, insert, size, swap, clear
    d1.erase(d1.begin()+1, d1.end()-2);
    cout << "elements of deque after erase range d1: ";
    for(int x : d1){
        cout << " # " << x ;
    }
    cout << "\n";
}

void exploreStack(){
    // Stack is a LIFO structure
    // No Indexing - Internal structure is tree
    // Main 3 function push(), pop(), top() - O(1) 
    // No other methods, like erase(). insert(), begin(), end(), iterators - defets the purpose of stack

    // cannot directly initialize like this --- stack<int> s1 ----;
    // must use push(), pop(), to insert ot remove
    stack<int> s1;
    s1.push(10);
    s1.push(11);
    s1.emplace(13);

    // Get Top element of Stack
    cout << "Top element of stack : " << s1.top();
    cout << "\n";

    cout << "Size if stack : " << s1.size();
    cout << "\n";

    s1.pop();

    cout << "Size if stack after pop() : " << s1.size();
    cout << "\n";

    cout << "Top element of stack after pop() : " << s1.top();
    cout << "\n";

    // can modify elements like
    s1.top() += 6;

    cout << "Top element of stack after addition : " << s1.top();
    cout << "\n";
}

void exploreQueue(){
    // Queue is FIFO structure
    // No Indexing
    // Mian methods - push(). emplace(), back(), front(), pop()
    queue<int> q1;
    q1.push(23);
    q1.push(34);
    q1.emplace(45);
    q1.emplace(56);

    // Get front element of quque
    cout << "front element of queue : " << q1.front();
    cout << "\n";

    // Get back element of quque
    cout << "back element of queue : " << q1.back();
    cout << "\n";

    cout << "Size of queue : " << q1.size();
    cout << "\n";

    q1.pop();

    cout << "Size of queue after pop() : " << q1.size();
    cout << "\n";

    cout << "front element of queue after pop() : " << q1.front();
    cout << "\n";

    // can modify elements like
    q1.front() += 6;

    cout << "front element of queue after addition : " << q1.front();
    cout << "\n";

    q1.back() += 8;

    cout << "back element of queue after addition : " << q1.back();
    cout << "\n";

}

void priorityQueue(){
    // Priority Queue is a non linear data structure - stores values in sorted order largest bring top
    // No indexing
    // Main methods - Push, Pop, Top
    // Default priority_queue is called as Maximum Heap
    // Time Complexity of PQ
    // Push - Log(n)
    // top - O(1)
    // Pop - Log(n)

    // ------------- Maximum Heap ---------------------
    priority_queue<int> pq;

    pq.push(10);
    pq.push(8);
    pq.emplace(1);
    pq.emplace(76);
    pq.emplace(2);

    cout << "Top element of Priority Queue -- " << pq.top() << "\n";

    pq.pop(); // <<-- pops the top element

    cout << "Top element of Priority Queue -- " << pq.top() << "\n";

    // ------------- Minimum Heap ---------------------
    // opposit of Max Heap, stores in reverse order smallest on top
    priority_queue<int, vector<int>, greater<int>> pq_min;

    pq_min.push(10);
    pq_min.push(8);
    pq_min.emplace(1);
    pq_min.emplace(76);
    pq_min.emplace(2);

    cout << "Top element of Priority Queue -- " << pq_min.top() << "\n";

    pq_min.pop(); // <<-- pops the top element

    cout << "Top element of Priority Queue -- " << pq_min.top() << "\n";

    // rest methods are size and swap
}

void exploreSet(){
    // Set - Unique and Ordered
    // Non linear, No indexing
    // Set operations happens in - O(logN) complexity
    set<int> st;
    st.insert(1);
    st.insert(99);
    st.emplace(8);
    st.emplace(8);
    st.insert(8);
    st.emplace(6);

    cout << "elements of set unique and ordered" << "\n";
    for(auto x : st){
        cout << " - " << x;
    }
    cout << "\n";

    // find element in set
    auto it = st.find(8); // <<-- this gives iterator (address) instead of value
    cout << "iterator of existing element - " << *it;
    cout << "\n";

    // also if element in not in the set then it points to .end() + 1 address of set
    auto it1 = st.find(7); // <<-- this gives iterator (address) .end() + 1 instead of value
    cout << "iterator of non existing element- " << *it1;
    cout << "\n";


    // count() in set says 0 or 1 as only one instance of element exists due to unique capability of set
    cout << "count() of set existing element " << st.count(8);
    cout << "\n";
    cout << "count() of set non existing element " << st.count(88);
    cout << "\n";

    auto firstSetEle = st.begin(); // also can't do st.begin()+1 as this is not indexing container
    cout << "iterator begin() element - " << *firstSetEle;
    cout << "\n";

    // .erase()
    st.erase(99);
    cout << "elements of set after erase" << "\n";
    for(auto x : st){
        cout << " - " << x;
    }
    cout << "\n";

    // .erase() take direct value or iterater address like below
    auto it2 = st.find(1);
    st.erase(it2);
    cout << "elements of set after erase" << "\n";
    for(auto x : st){
        cout << " - " << x;
    }
    cout << "\n";

    //
    set<int> st2;
    st2.insert(1);
    st2.insert(99);
    st2.emplace(8);
    st2.insert(8);
    st2.emplace(16);
    st2.emplace(60);
    st2.emplace(56);
    st2.emplace(3);

    // .erase() from start to end
    auto start_it = st2.find(8);
    auto end_it = st2.find(60);

    st2.erase(start_it, end_it);

    cout << "elements of set after erase start end-1" << "\n";
    for(auto x : st2){
        cout << " - " << x;
    }
    cout << "\n";

}

void exploreMultiSet(){
    // MultiSet - Same as Set my just not unique, can have multiple occurances, But still Sorted
    // Non linear, No indexing

    multiset<int>ms1;
    
    ms1.insert(1);
    ms1.emplace(1);
    ms1.emplace(1);
    ms1.insert(2);
    ms1.insert(2);
    ms1.insert(4);
    ms1.insert(6);

    cout << "Elements in MultiSet -- " << "\n";
    for(auto x: ms1){
        cout << "-" << x;
    }
    cout << "\n";

    // Since not unique - .count() will give count of values present instead of 0/1 like set
    cout << "Occurances of 1 in ms1 - " << ms1.count(1);
    cout << "\n";

    cout << "Find in mulitset ms1 - " << *ms1.find(1); // <- .find() gives iterator
    cout << "\n";

    // .erase() will erase all occurances in set not just one
    cout << "erase all occurances in mulitset ms1 - " ;
    ms1.erase(1);
    cout << "\n";

    cout << "Elements in MultiSet after erase -- " << "\n";
    for(auto x: ms1){
        cout << "-" << x;
    }
    cout << "\n";

    // if want to .erase single occurance use .find() give iterator which is uniuqe address
    cout << "erase first  occurances of 2 in mulitset ms1 - " ;
    ms1.erase(ms1.find(2));
    cout << "\n";

    cout << "Elements in MultiSet after it erase -- " << "\n";
    for(auto x: ms1){
        cout << "-" << x;
    }
    cout << "\n";

    ms1.insert(6);
    ms1.insert(7);
    ms1.insert(9);
    ms1.insert(10);
    // can also do .erase(start, end+1)
    cout << "erase from 1 index to 3 in mulitset ms1 - " ;
    ms1.erase(ms1.find(4), ms1.find(7));
    cout << "\n";

    cout << "Elements in MultiSet after start end erase -- " << "\n";
    for(auto x: ms1){
        cout << "-" << x;
    }
    cout << "\n";

    // rest methods same as set

}

void exploreUnorderedSet(){
    // Unordered_set - similar to Set But no order(sorted), but Unique
    // can store in any random order, not even in order of insert statements, random
    // lower_bound and upper_bound functions do not work for unordered_set (since it is not sorted)
    // rest methods are same as set
    // Most of the times Time Complexity - O(1) compared to Set which is O(log N)
    // Only in rare worst cases the TC - O(n) - very rare
    unordered_set<int> us1;
    us1.insert(1);
    us1.insert(4);
    us1.insert(4);
    us1.insert(4);
    us1.insert(8);
    us1.insert(9);
    us1.insert(10);
    us1.insert(18);
    us1.insert(28);
    us1.insert(43);
    us1.insert(81);

    cout << "Elements in unordered_set us1 -- " << "\n";
    for(auto x: us1){
        cout << "-" << x;
    }
    cout << "\n";

}

void exploreMap(){
    // Map stores key value pairs
    // Data Type of key and value can be anything int, double, string etc..
    // In Map the Keys are stored in Stoted Order, when finding with .find() iterators must use valid key esle gives 0 or Null

    map<int, int> mp1;
    map<pair<int, int>, int> mp2;

    mp1[1] = 2;
    mp1.insert({3,5});
    mp1.emplace(2,6);
    
    // access key and value using .first and .second
    cout << "elemented in map " << endl;
    for (auto x: mp1){
        cout << "key " << x.first << " || value " << x.second << endl;
    }
    cout << endl;

    mp2[{6, 9}] = 15;
    mp2.insert({{4,4}, 8});
    mp2.emplace(make_pair(1,3), 4);
    cout << "elemented in map mp2 " << endl;
    for (auto x: mp2){
        cout << "first key " << x.first.first <<  " || second key " << x.first.second << " || value " << x.second << endl;
    }
    cout << endl;
    
    // directly access value with Keys
    cout << "Value of mp1 at key 2 is " << mp1[2] << endl;

    // .find() works on Keys, esle 0 or Null
    // mp1.find(2);


}

int main(){
    // exploreList();
    // exploreDeque();
    // exploreStack();
    // exploreQueue();
    // priorityQueue();
    // exploreSet();
    // exploreMultiSet();
    // exploreUnorderedSet();
    exploreMap();
}