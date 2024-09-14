#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, r;
    cin >> n;
    vector<int>  a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[1]) cout << i + 1 ;
    }
}

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        solve();
        cout << endl;
    }
}
