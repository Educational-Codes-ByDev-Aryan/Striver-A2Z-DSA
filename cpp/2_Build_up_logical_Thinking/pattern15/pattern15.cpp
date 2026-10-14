
// 929. Pattern 15
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// ABCDE

// ABCD

// ABC

// AB

// A

// Print the pattern in the function given to you.
#include <bits/stdc++.h>
using namespace std;
void pattern15(int n)
{
   for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << char(64 + j);
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    pattern15(n);
    return 0;
}
