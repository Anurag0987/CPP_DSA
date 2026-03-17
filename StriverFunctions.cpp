#include<iostream>
using namespace std;
// Functions
// Functions are set of code which performs something for you
// Functions are used to modularize code
// Functions are used for better readibility
// Functions are used to re-use the same code multiple times

// --different types of functions--
// Void <- which does not return anything
// return
// Parameterized <- accepts parameters
// non-Parameterized <- does not accepts parameters

void printWelcome(){
    cout << "Welcome to the Program!" << "\n";
};

void voidAndParameterizedWelcome(string name){
    cout << "Welcome to the Program! " << name <<"\n";
};

int lengthOfStr(string name){
    int lenOfStr = name.size();
    // lenOfStr = lenOfStr + 0.999; << -- return type and variable should be float
    return lenOfStr;
};

int findMax(int num1, int num2){
    // if(num1 > num2){
    //     return num1;
    // }
    cout << "In findMax function !";
    // since the return type of function is integer it is looking for return line, if not returns garbase val
}

// Pass by Value <-- CPP sends "copy" of value instead of actual value
void doSomethingPassByValue(int value1){
    cout << value1 << endl;
    value1 += 10;
    cout << value1 << endl;
    value1 += 10;
    cout << value1 << endl;
}

// Pass by reference <<-- '&' and other ways too, basically CPP sends the actual address here
void doSomethingPassByReference(int &value2){
    cout << value2 << endl;
    value2 *= 3;
    cout << value2 << endl;
    value2 *= 3;
    cout << value2 << endl;
}

// Arrays Pass by reference Special Case
void arrayPassByReferenceSpecialCase(int arr[]){
    arr[3] *= 5;
    cout << "Value of arr inside the function ==> " << arr[3] << endl;

}

int main(){
    string name, name2;
    cin >> name >> name2;
    printWelcome();
    voidAndParameterizedWelcome(name);
    voidAndParameterizedWelcome(name2);
    
    cout << lengthOfStr(name) << "\n";
    cout << lengthOfStr(name2) << "\n";

    // inbuilt functions
    int num1, num2;
    cin >> num1 >> num2;
    int minimun = min(num1, num2);
    cout << "minimun of 2 nums: " << minimun << "\n";

    // return function return' garbage value if not specicied (basically all non void functions are return functions)

    cout << "Returns garbage value if no trurn line for return type functions -- " << findMax(5, 6) << endl;

    // Pass by value
    int value1 = 100;
    doSomethingPassByValue(value1);
    cout << "pass by value not effected -- " << value1 << endl;

    // Pass by reference
    int value2 = 90;
    doSomethingPassByReference(value2);
    cout << "pass by reference with just & the original value effected -- " << value2 << endl;

    // -- Special Case Pass by reference with Arrays
    // Arrays by default goes by reference even without & sign, rest all datatypes need to specify & if need to modify the reference
    int arr1[5] = {1, 3, 5, 7, 9};
    arrayPassByReferenceSpecialCase(arr1);
    cout << "3rd index value of in Int Main function -- " << arr1 [3] << endl;
    return 0;
}