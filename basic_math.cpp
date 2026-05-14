#include<bits/stdc++.h>
using namespace std;

void extractDigitsFromNum(int num){
    int lastDig = num % 10;
    num = num / 10;
    // cout << lastDig; // this will print 9876 correct order
    if(num != 0) {
        extractDigitsFromNum(num);
    }
    cout << lastDig; // this will print 6789 correct order
}

int exploreReverseNumber(int num) {

    int reversedVal = 0;
        do{
            int lastDig = num % 10;
            reversedVal = (reversedVal*10) + lastDig;
            num = num/10;
        } while (num != 0);
    return reversedVal;
}

int main(){
    // Digits
    // Extract digits from given number
    // use modulus (%) 10 to get last number of given integer
    // why? - modulus gives reminder so, 
    // ex: 123 % 10 => 10)123(12 => reminder 3
    // ex: 987 % 10 => 10)987(98 => reminder 7

    // to get last to 2nd number just divide by 10 - take int part and again use % 10
    // ex: 123/10 => 12.3 => int(12.3) => 12 => 12 % 10 => 2

    // Extraction of digits is recursively perform mod and division until we get 0
    // result of extraction will be in reverse order

    int num1 = 6789;
    // use recursion
    extractDigitsFromNum(num1);

    // while recusion is looks cool, simple while loop is more efficient
    cout << endl << "------------------" << endl ;
    do{
        cout << num1 % 10;
        num1 = num1 / 10;
    }while(num1 != 0); 
    cout << endl;

    // Count of digits -- can do using above approach
    // Additionally -- we can do using log
    // log10(num) + 1 => count of digits in given number
    // ex: log10(7789) => 3.781.. => 3.781 + 1 => 4.781 => int(4.781) => 4

    //Count using log
    int num2 = 89871;
    cout << "Count of digits using log10 is - " << int(log10(num2)+1) << endl;
    cout << "Count of digits using log10 is - " << int(log10(78)+1) << endl;

    // ****Time Complexity***** of above division
    // Ignoring the constant operations -- in count no. of digits problem
    // O(Log10 N)

    // ****Remember*******
    // when ever there is --division--, (log N)
    // we are dividing problem computation by that number so it's Logx (N) - where x is number you are dividing by
    // if x = x/2 the TC => O(log2 N)
    // if x = x/8 the TC => O(log8 N)
    
    int num3 = 1234;
    cout << "Reversed Num of 1234 is - "  << exploreReverseNumber(num3) << endl;
}