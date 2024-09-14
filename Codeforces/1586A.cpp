#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;
    for (int i = 1;i < 1667 ; i++)
    {
        if (i % 3 == 0 || i % 10 == 3) continue;
        k--;
        if (k == 0) 
        {
            cout << i ;
            break;
        }
    }
    
    
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
        cout << "\n";
    }
}
