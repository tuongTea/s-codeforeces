#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a[1000];
    bool b = true;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) > 1)
            b = false;
    }
    if (b == false)
        cout << "NO";
    else
        cout << "YES";
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
