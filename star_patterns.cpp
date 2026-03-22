#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << j+1;
        }
        cout << "\n";
    }
}

void pattern4(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << i+1;
        }
        cout << "\n";
    }
}

void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << '*';
        }
        cout << "\n";
    }
}

void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << j+1;
        }
        cout << "\n";
    }
}

void pattern7(int n){
    // The code can be made shorter and cleaner, but the time complexitity remain same as any other solution for this, i.e., O(n2)
    for(int i=1; i<=n; i++){
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < n-1; l++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern8(int n){
    for(int i=1; i<=n; i++){
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < 2*n-2*(i-1); k++)
        {
            cout << "*";
        }
        for (int l = 0; l < i; l++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern9(int n){
    for(int i=1; i<=2*n; i++){
        if(i <= (2*n)/2){
            for (int j = 0; j < n-i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2*i-1; k++)
            {
                cout << "*";
            }
            for (int l = 0; l < n-i; l++)
            {
                cout << " ";
            }
        }else{
            for (int m = 1; m < i-n; m++)
            {
                cout << " ";
            }
            for (int o = 0; o < 2*n-2*(i-n)+1; o++)
            {
                cout << "*";
            }
            for (int p = 1; p < i-n; p++)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
// for patter9 we can have many solutions, the above one also correct just more complex to read and maintain
// In programming code readability, ligic simplicity is as important as Time complexity, all solution have O(n2)
// Even simpler is just print the patter 7 & 8 one after other ro get pattern9
// Here is one more solution
void pattern9_2(int n){
    int row;
    for (int i = 1; i <= 2*n; i++)
    {
        if(i <=n)
            row = i;
        else
            row = 2 * n - i + 1;

        //spaces only front
        for(int j = 0; j < n - row; j++){
            cout << " ";
        }
        for (int k = 0; k < 2 * row - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern10(int n){
    int totalRows = 2*n;
    for (int i = 1; i <= totalRows; i++)
    {
        if(i <= n){
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }else{
            for (int k = totalRows; k > i; k--)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
}

void pattern10_2(int n){    
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if(i > n) stars = 2*n-i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    pattern10_2(n);
    return 0;
}