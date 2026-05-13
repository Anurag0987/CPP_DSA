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

}