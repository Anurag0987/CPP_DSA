#include<iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y ;
    cout << "Value of X is: " << x << " and y: " << y << "\n";

    // string ss;
    // cin >> ss;
    // cout << "value of ss string: " << ss << "\n";

    // getline
    string str1;
    getline(cin, str1);
    cout << "Str1 value: " << str1;

    // int, long, long long, float, double
    // string, getline - (double quotes when declared)
    // char - (single quotes when declared for single chars)

    cout << "\n";
    // if else
    int age;
    cin >> age;
    cout << "user provided age: " << age;
    cout << "\n";

    if (age >= 18){
        cout << "You are adult";
    }
    else if (age >= 13){
        cout << "**You are teenager**";
    }
    else{
        cout << "--You are child--";
    }
    cout << "\n";

    //arrays
    int arr[5] = {11, 23, 99, 19, 18}; // <<-- 0 basesd indexing
    cout << arr[0] << " " << arr[3];
    cout << "\n";

    // 2D arrays
    float arr2[3][4] = {
        {1, 2, 3, 4.0},
        {22, 33, 66.1, 99}
    }; // <-- [row][column]

    cout << "2d array value: " << arr2[1][2];

    cout << "\n";
    // If not assigned then cpp will assign some garbase value
    cout << "Un-assigned garbage value: " << arr2[2][3];

    cout << "\n";

    // Strings
    string sss = "Anuraz";
    int LenOfString = sss.size();
    cout << "length of string: " << LenOfString;
    sss[LenOfString - 1] = 'g';
    cout << "\n";

    cout << "modified string value- " << sss;

    cout << "\n";

    // for loops 
    for(int i=1; i<=5; i++){
        cout << "Anurag--" << i << "\n";
    }
    cout << "\n";

    // while loops
    int abc = 1;
    while(abc < 100){
        abc += 10;
        cout << "while loop -- print -- " << abc << "\n";
    }
    cout << "\n";

    // do while
    int efg = 1111;
    do{
        cout << "In do condition of do while --will be executed once irrecpective of contition 11";
    }while (efg <1);{
        cout << "In while condition of do while -- won't be executed";
    }
    cout << "\n";

    return 0;
}