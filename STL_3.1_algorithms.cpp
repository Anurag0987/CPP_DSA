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

int main (){
    exploreSort();
}