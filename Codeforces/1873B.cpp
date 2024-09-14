#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(int i = l; i < r; i++)
#define reprev(i, l, r) for(int i = l; i >= r; i--)

void solve() {
    int r = 1, n, m, c = 0, b = 1;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    a[0]++;
    rep(i, 0, n) r = r * a[i];
    cout << r;
    
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}