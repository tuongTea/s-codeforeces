#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve() {
    int r = 0, x = 0, y = 0, c = 1, m = 1, n;
    string st;
    cin >> n;
    cin >> st;
    rep(i, 0, n) {
        y = int(st[i]);
        x = max(y, x);
    }
    cout << x - 96;
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    long long t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}