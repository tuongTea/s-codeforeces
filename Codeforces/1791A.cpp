#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    cin >> n;
    string st = "codeforces";
    char a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int c = 0;
        for (int i = 0; i < 10; i++)
        {
            if (a == st[i]) c++;
        }
        if (c > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        
           
    }
    
}
