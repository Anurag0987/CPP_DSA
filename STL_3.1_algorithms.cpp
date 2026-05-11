#include<bits/stdc++.h>
using namespace std;

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

}

int main (){
    exploreSort();
}