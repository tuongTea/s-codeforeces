#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        cout << ((st == "YES" || st == "yes" || st == "Yes" || st == "yEs" || st == "yeS" || st == "YEs" || st == "YeS" || st == "yES") ? "YES\n" : "NO\n");
    }
    
    
}
