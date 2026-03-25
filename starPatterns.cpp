#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        cout << "\n";
    }
}

void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
        }
        cout << "\n";
    }
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1;
        }
        cout << "\n";
    }
}

void pattern7(int n)
{
    // The code can be made shorter and cleaner, but the time complexitity remain same as any other solution for this, i.e., O(n2)
    for (int i = 1; i <= n; i++)
    {
        // Pattern
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // Space
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << "*";
        }
        // Pattern
        for (int l = 0; l < n - 1; l++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < 2 * n - 2 * (i - 1); k++)
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

void pattern9(int n)
{
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= (2 * n) / 2)
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2 * i - 1; k++)
            {
                cout << "*";
            }
            for (int l = 0; l < n - i; l++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int m = 1; m < i - n; m++)
            {
                cout << " ";
            }
            for (int o = 0; o < 2 * n - 2 * (i - n) + 1; o++)
            {
                cout << "*";
            }
            for (int p = 1; p < i - n; p++)
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
void pattern9_2(int n)
{
    int row;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
            row = i;
        else
            row = 2 * n - i + 1;

        // spaces only front
        for (int j = 0; j < n - row; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * row - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern10(int n)
{
    int totalRows = 2 * n;
    for (int i = 1; i <= totalRows; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int k = totalRows; k > i; k--)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
}

void pattern10_2(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int startsWith = (i % 2 == 0) ? 0 : 1;
        for (int j = 1; j <= i; j++)
        {
            cout << startsWith;
            // startsWith = startsWith == 0 ? 1 : 0; // <<-- Both of this work
            startsWith = 1 - startsWith; // <<-- Both of this work
        }
        cout << "\n";
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= 2 * n - 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << l;
        }
        cout << "\n";
    }
}

void pattern13(int n)
{
    int startNum = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << startNum << " ";
            startNum += 1;
        }
        cout << "\n";
    }
}

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char startChar = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << startChar++;
        }
        cout << "\n";
    }
}
// OR we can do this as well
void pattern14_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j < ('A' + (n - i)); j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern16(int n)
{
    char startChar = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << startChar;
        }
        startChar++;
        cout << "\n";
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        char tempChar;
        for (char k = 'A'; k <= 'A' + i; k++)
        {
            cout << k;
            tempChar = k;
        }
        for (char l = --tempChar; l > tempChar - (i); --l)
        {
            cout << l;
        }
        cout << "\n";
    }
}
// Or below
void pattern17_2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // Pattern
        char ch = 'A';
        int breakPoint = (2 * i - 1) / 2;
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << ch;
            if (k <= breakPoint)
                ch++;
            else
                ch--;
        }
        cout << "\n";
    }
}

void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char startChar = 'A' + n - i;
        for (char j = startChar; j < startChar + i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern19(int n)
{
    int midVal = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        if (i < midVal)
        {
            for (int j = 0; j < midVal - i; j++)
            {
                cout << "*";
            }
            for (int k = 1; k < (2*i)-1; k++)
            {
                cout << " ";
            }
            for (int l = 0; l < midVal - i; l++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < i-midVal+1; j++)
            {
                cout << "*";
            }
            for (int k = 0; k < 2*(n-i); k++)
            {
                cout << " ";
            }
            for (int k = 0; k < i-midVal+1; k++)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
}


void pattern20(int n)
{
    int intSpace = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2*n-intSpace; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
        intSpace +=2;
    }
    
    intSpace = 2;
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < intSpace; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        cout << "\n";
        intSpace +=2;
    }
}

void pattern21(int n){
    for (int i = 0; i < n; i++)
    {
        if(i == 0 || i == n-1){
            for (int j = 0; j < n-1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int j = 0; j < n-2; j++)
            {
                cout << " ";
            }
        }
        cout << "*";
        cout << "\n";
    }
}
// OR
void pattern21_2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void pattern22(int n){
    int totalRows = 2*n;
    // find the minimum distance of the point in matrix and just do (n-min_distance)
    // 4444444
    // 4333334
    // 4322234
    // 4321234
    // 4322234
    // 4333334
    // 4444444
    for (int i = 0; i < totalRows-1; i++)
    {
        for (int j = 0; j < totalRows-1; j++)
        {
            // min (left, right, top, bottom)
            int firstMin = min(j, totalRows-2-j);
            int secMin = min(firstMin, i);
            int thiMin = min(secMin, totalRows-2-i);
            // or min(j, min (totalRows-2-j, min (i, totalRows-2-i)))
            int val = n-thiMin;
            cout << val;
            // if (i == 0 || i == totalRows-2 || j == 0 || j == totalRows-2){
                //     cout << n;
                // }else if (i == 1 || i == totalRows-3 || j == 1 || j == totalRows-3){
                    //     cout << n-1;
                    // }else if (i == 2 || i == totalRows-4 || j == 2 || j == totalRows-4){
                        //     cout << n-2;
                        // }else{
                            //     cout << n-3;
                            // }
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    cout << "___pattern1___ \n" << "------------------------------------------\n";
    pattern1(n);
    cout << "___pattern2___ \n" << "------------------------------------------\n";
    pattern2(n);
    cout << "___pattern3___ \n" << "------------------------------------------\n";
    pattern3(n);
    cout << "___pattern4___ \n" << "------------------------------------------\n";
    pattern4(n);
    cout << "___pattern5___ \n" << "------------------------------------------\n";
    pattern5(n);
    cout << "___pattern6___ \n" << "------------------------------------------\n";
    pattern6(n);
    cout << "___pattern7___ \n" << "------------------------------------------\n";
    pattern7(n);
    cout << "___pattern8___ \n" << "------------------------------------------\n";
    pattern8(n);
    cout << "___pattern9___ \n" << "------------------------------------------\n";
    pattern9(n);
    cout << "___pattern9_2___ \n" << "------------------------------------------\n";
    pattern9_2(n);
    cout << "___pattern10___ \n" << "------------------------------------------\n";
    pattern10(n);
    cout << "___pattern10_2___ \n" << "------------------------------------------\n";
    pattern10_2(n);
    cout << "___pattern11___ \n" << "------------------------------------------\n";
    pattern11(n);
    cout << "___pattern12___ \n" << "------------------------------------------\n";
    pattern12(n);
    cout << "___pattern13___ \n" << "------------------------------------------\n";
    pattern13(n);
    cout << "___pattern14___ \n" << "------------------------------------------\n";
    pattern14(n);
    cout << "___pattern14_2___ \n" << "------------------------------------------\n";
    pattern14_2(n);
    cout << "___pattern15___ \n" << "------------------------------------------\n";
    pattern15(n);
    cout << "___pattern16___ \n" << "------------------------------------------\n";
    pattern16(n);
    cout << "___pattern17___ \n" << "------------------------------------------\n";
    pattern17(n);
    cout << "___pattern17_2___ \n" << "------------------------------------------\n";
    pattern17_2(n);
    cout << "___pattern18___ \n" << "------------------------------------------\n";
    pattern18(n);
    cout << "___pattern19___ \n" << "------------------------------------------\n";
    pattern19(n);
    cout << "___pattern20___ \n" << "------------------------------------------\n";
    pattern20(n);
    cout << "___pattern21___ \n" << "------------------------------------------\n";
    pattern21(n);
    cout << "___pattern21_2___ \n" << "------------------------------------------\n";
    pattern21_2(n);
    cout << "___pattern22___ \n" << "------------------------------------------\n";
    pattern22(n);
    return 0;
}