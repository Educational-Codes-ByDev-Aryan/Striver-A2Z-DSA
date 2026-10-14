#include <bits/stdc++.h>
using namespace std;
void pattern14(int n)
{
    // for understanding ascii values refer image given in the folder 
    // pattern 14
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + j);
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    pattern14(n);
    return 0;
}