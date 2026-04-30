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


int main() {
    return 1;
}