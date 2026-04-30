#include<bits/stdc++.h> //<-- this one library includes all essential libraries like math.h, stringh.h, <utility>
using namespace std;

// .lower_bound() <-- This algo finds the index that is greater than or equal to the given number in *sorted container
// .upper_bound() <-- This algo finds the index that is greater than the given number in *sorted container

// containers [vector, set, etc..] musrt be SORTER for these to work.

// .lower_bound = smallest index(*iterator) such that __arr[index] >= num__
// .upper_bound = smallest index(*iterator) such that __arr[index] > num__

// Time Complexity => O(log N)

// Applications -
//  - Count occurances of a number by counting distance b/w .lower_bound() and .upper_bound()
//  - Efficient insertion of number in sorter array by knowing *it of next greatest num in array
//      - better than .sort() function time complexity of --sort => O(N log N)-- as it needs to compare all elements again
//  - Find index colser to given number.

// .lower_bound and .upper_bound used **Binary Search** algorithm to qucikly find the near smallest index in sorted conatiner.
// Binary search works on sorted array anyway

void explainLowerBound(){
    // .lower_bound() -> smalles index(*it) where arr[index] >= num
    // If multiple .lower_bound() give first occurance
    // arr = {1, 3, 5, 6, 7, 7, 88, 91}

    // num = 3
    // .lower_bound(3) --> index = 1

    // num = 7
    // .lower_bound(7) --> index = 4

    // num = 91
    // .lower_bound(91) --> index = 7

    // **Incase of number not exists in array we get .end() -> end_index + 1**
    
    // num = 100
    // .lower_bound(100) --> index = 8

    // num = 4
    // .lower_bound(4) --> index = 8

}

void explainUpperBound(){
    // .upper_bound() -> smalles index(*it) where arr[index] > num
    // If multiple .upper_bound() give first occurance
    // arr = {1, 3, 5, 6, 7, 7, 88, 91}

    // num = 3
    // .upper_bound(3) --> index = 2

    // num = 7
    // .upper_bound(7) --> index = 6

    // num = 91
    // .upper_bound(91) --> index = 8

    // **Incase of number not exists in array we get .end() -> end_index + 1**
    
    // num = 100
    // .lower_bound(100) --> index = 8

    // num = 4
    // .lower_bound(4) --> index = 8
}

int main() {
    explainLowerBound();
    explainUpperBound();
}