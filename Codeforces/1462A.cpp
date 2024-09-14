#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve() {
    int r = 1, c = 1, k, n, a[10000], b[10000];
    cin >> n;
    rep(i, 1, n) cin >> a[i];
    if(n % 2 == 0) k = n / 2;
    else k = (n / 2) + 1;
    for (int i = 1; i <= n; i++){
        b[c] = a[i];
        c += 2;
    }
    c = 0;
    for (int i = n + 1; i >= k; i--){
        b[c] = a[i];
        c += 2;
    }
    rep(i, 1, n) cout << b[i] << " ";
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