#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (b > a) + (c > a) + (d > a);
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
