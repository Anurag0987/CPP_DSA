#include<bits/stdc++.h>
using namespace std;

// input parameters, element1, and element2
// in pair, pair 1 and pair 2 -- {1, 9}, {3, 4}
// return true if in correct order else false -- assuming p1 comes first and p2 second in order
bool compNormalSortPair(pair<int, int> p1, pair<int, int> p2){
    if(p1.first > p2.first) return false;
    return true;
}

bool compAdvancedSortPair(pair<int, int> p1, pair<int, int> p2){
    if(p1.second > p2.second) return false;
    if(p1.second < p2.second) return true;
    // 3rd case - in case they both match check for first element in descending
    if(p1.first < p2.first) return false;
    return true;
}

void exploreSort(){
    // CPP offers the .sort() function which is most efficinet for most of the cases
    // i.e,. no need to implement custo sorting techniques like Heap sort, Bubble sort etc.. for generic cases
    // .sort() accepts 2 arguments by default, .sort(a, a+n)
    // a -> Starting of Index in container - initial iterator 
    // a+n -> the Last Index in container, end iterator which is end+1
    // [start, end)
    // Can proved specific range in container to get sorted rather tahn full container.
    vector<int> vec1;
    vec1.push_back(6);
    vec1.emplace_back(2);
    vec1.emplace_back(8);
    vec1.emplace_back(1);
    vec1.emplace_back(99);
    vec1.emplace_back(9);

    cout << "vector before sort: " << endl;
    for (auto x: vec1){
        cout << x << " ";
    }
    cout << endl;

    sort(vec1.begin(), vec1.end());

    cout << "Sorted vector: " << endl;
    for (auto x: vec1){
        cout << x << " ";
    }
    cout << endl;
    cout << "------------------"<< endl;

    vector<int> vec2;
    vec2.push_back(1);
    vec2.emplace_back(2);
    vec2.emplace_back(3);
    vec2.emplace_back(6);
    vec2.emplace_back(4);
    vec2.emplace_back(5);

    // ******** sort only from index 3 to 5
    cout << "vector before sort vec2: " << endl;
    for (auto x: vec2){
        cout << x << " ";
    }
    cout << endl;

    sort(vec2.begin()+3, vec2.end());

    cout << "Sorted vector vec2 specific range: " << endl;
    for (auto x: vec2){
        cout << x << " ";
    }
    cout << endl;
    cout << "------------------"<< endl;

    // ---------- Reverse sort ---------------

    cout << "vector before reverse sort: " << endl;
    for (auto x: vec1){
        cout << x << " ";
    }
    cout << endl;

    sort(vec1.begin(), vec1.end(), greater<int>());

    cout << "Reverse Sorted vector: " << endl;
    for (auto x: vec1){
        cout << x << " ";
    }
    cout << endl;
    cout << "------------------"<< endl;

    // ---------- Custom sort ---------------
    // what is user wants to have a way to order element in his desired way
    // Comparator -- is a bool function that contains the logic to determin to return true for the desired outcome

    // below is pair I want to sort according to 2nd element
    // and if 2nd element is same then use 1ts element in decending order
    pair<int, int> pr1[] = {{5,9}, {3,4}, {6, 4}};
    
    cout << "Pair before sort: " << endl;
    for (auto x: pr1){
        cout << "{" << x.first << ", " << x.second << "} ";
    }
    cout << endl;
    cout << "------------------"<< endl;
    // now sort() -- use comparator as pari is not sortable usually by default
    // normal pair sort, using 1st element

    sort(pr1, pr1 + 3, compNormalSortPair);

    cout << "Pair after Normal sort: " << endl;
    for (auto x: pr1){
        cout << "{" << x.first << ", " << x.second << "} ";
    }
    cout << endl;
    cout << "------------------"<< endl;
    
    // now the below custome sort
    // expected outcome {{6, 4}, {3, 4}, {1, 9}}

    sort(pr1, pr1 + 3, compAdvancedSortPair);

    cout << "Pair after Advanced sort: " << endl;
    for (auto x: pr1){
        cout << "{" << x.first << ", " << x.second << "} ";
    }
    cout << endl;
    cout << "------------------"<< endl;

}

void exploreBuiltInPopCount(){
    // __builtin_popcount() -- is a important method in STL that 
    // returns the count of no. of 1's in given number in it's binary format

    int num1 = 7; // binary of 7 is 00000000000000000000000000000111 - 3(1's)
    int no_of_1s = __builtin_popcount(num1);

    cout << "builtin_popcount() of 7 is - " << no_of_1s << endl;

    int num2 = 6; // binary of 7 is 00000000000000000000000000000110 - 2(1's)
    int no_of_1s_2 = __builtin_popcount(num2);
    cout << "builtin_popcount() of 6 is - " << no_of_1s_2 << endl;

    long long num3 = 68172662111902; 
    int no_of_1s_3 = __builtin_popcountll(num3); // need to use ll for long long variable dataTypes
    cout << "builtin_popcount() of 68172662111902 long long is - " << no_of_1s_3 << endl;

}

void exploreNextPermutation(){
    // next_permutation -- is a important method in STL that just returns the next dictionary/lexicographically ordered permutation of given string else NULL
    // example -- "123" -- next_permutation() is == 231
    // **** Remember only is dictonary order is none then returns NULL -- Only in do{}while loop, 
    // if not infinite loop
    
    string s1 = "123";
    // First permutation
    next_permutation(s1.begin(), s1.end());
    cout << "next permutation of string s1 - " << s1 << endl;

    // repeat again until end
    next_permutation(s1.begin(), s1.end());
    cout << "next permutation of string s1 - " << s1 << endl;

    // better way to do it is using do while
    string s2 = "123";
    do{
        cout << "permutations of s2 - " << s2 << endl;
    }while(next_permutation(s2.begin(), s2.end()));

    // Infinite permutation
    string s3 = "321";
    next_permutation(s3.begin(), s3.end());
    cout << "Infinite with cout next permutation of string s3 - " << s3 << endl;
    next_permutation(s3.begin(), s3.end());
    cout << "Infinite with cout next permutation of string s3 - " << s3 << endl;
    next_permutation(s3.begin(), s3.end());
    cout << "Infinite with cout next permutation of string s3 - " << s3 << endl;

}

void exploreMinMaxElement(){
    // max_element(), min_element() -- traverse the contrainer and find max or min of the container respectifully

    int arr1[] = {1, 6, 9, 56, 14, 7};
    auto max_it1 = max_element(arr1, arr1+6); // <-- returns iterator
    cout << "max element in arr1 is - " << *max_it1 << endl;

    auto min_it1 = min_element(arr1, arr1+6); // <-- returns iterator
    cout << "min element in arr1 is - " << *min_it1 << endl;


}

int main (){
    // exploreSort();
    // exploreBuiltInPopCount();
    // exploreNextPermutation();
    exploreMinMaxElement();
}