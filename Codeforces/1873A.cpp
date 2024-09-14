#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve() {
    string st;
    cin >> st;
    if (st[0] == 'a' || st[1] == 'b' || st[2] == 'c') cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}