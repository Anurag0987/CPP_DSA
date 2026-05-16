#include<bits/stdc++.h>
#include <numeric>
#include<cmath>
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
    // For reverse Just do (x*10) + lastDig
    // ex: x = 0, num = 1234 -> lastDig = 4 -> num = 123
    // x = (0*10) + 4 => x = 4
    // x = (4*10) + 3 => x = 43
    // x = (43*10) + 3 => x = 432
    // x = (432*10) + 1 => x = 4321
    // num = 0 ! stop
    int reversedVal = 0;
        do{
            int lastDig = num % 10;
            reversedVal = (reversedVal*10) + lastDig;
            num = num/10;
        } while (num != 0);
    return reversedVal;
}

bool isPalindrome(int x) {
    // Special cases:
    // 1. Negative numbers are not palindromes (e.g., -121 reversed is 121-)
    // 2. If the last digit is 0, the first digit must also be 0 (only '0' satisfies this)
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversedHalf = 0;
    // Reversing only up to the middle of the number
    while (x > reversedHalf) {
        reversedHalf = (reversedHalf * 10) + (x % 10);
        x /= 10;
    }

    // For even-length numbers (e.g., 1221): x will be 12, reversedHalf will be 12
    // For odd-length numbers (e.g., 12321): x will be 12, reversedHalf will be 123
    // We can get rid of the middle digit by reversedHalf / 10
    return x == reversedHalf || x == reversedHalf / 10;
}
bool exploreAmstrongNumber(int x){
    // Amstrong Number is the number that results in same number even after summing 
    // the power of (total number of digits in number (len of no. of digits)) of individual digits
    // ex: 137 => 1^3 + 5^3 + 3^3 => 153 -- so Amstrong Number
    // ex: 35 => 3^2 + 5^2 => 34 -- Not Amstrong Number
    int tmp = x;
    int finalNum = 0;
    
    int digitSize = x;
    int lenOfDig = 0;

    while(digitSize > 0){
        digitSize /= 10;
        lenOfDig++;
    }
    
    while (tmp > 0){
        int lastDig = tmp % 10;
        tmp = tmp / 10;
        // pow() -- built in function is CPP is for floag, so sometimes 5^3 => 124.9999 => rounds up to 124
        int currentPowerSum = 1; 
        for(int i=0; i<lenOfDig; i++){
            currentPowerSum *= lastDig;
        }
        finalNum += currentPowerSum;
    }

    return x == finalNum;
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
    
    //******** Palindrome *************
    int num3 = 1234;
    cout << "Reversed Num of 1234 is - "  << exploreReverseNumber(num3) << endl;

    cout << "Is 121 palindrome - " << isPalindrome(121) << endl;

    //******** Amstrong Number *************
    cout << "Is 137 an Amstrong number? - " << exploreAmstrongNumber(157) << endl;

    cout << "Is 1634 an Amstrong number? - " << exploreAmstrongNumber(1634) << endl;

    cout << "Is 153 an Amstrong number? - " << exploreAmstrongNumber(153) << endl;

}