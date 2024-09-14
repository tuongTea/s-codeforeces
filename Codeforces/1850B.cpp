#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve() {
    int r = 1, k = -1, n;
    cin >> n;
    rep(i, 1, n) {
        int c, d;
        cin >> c >> d;
        if (c <= 10) {
            if( k < d) {
                k = d;
                r = i;
            }
        }
    }
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