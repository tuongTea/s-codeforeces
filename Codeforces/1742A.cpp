#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a + b == c || c + a == b || b + c == a) ? "YES" : "NO");
    
}

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        solve();
        cout << "\n";
    }
}
