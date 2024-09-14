#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve() {
    ll r = 0, n, m, c = 0;
    cin >> n;
    vector<ll> a(n), b(n), a1(n), b1(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    a1 = a, b1 = b;
    sort(a1.begin(), a1.end());
    sort(b1.begin(), b1.end());
    rep(i, 0, n) {
        a[i] -= a1[0];
        b[i] -= b1[0];
        m = max(a[i], b[i]);
        r += m;
    }
    cout << r;
    
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    long long t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}