#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve(int n) {
    int r = 0, o = 0, e = 0;
    rep(i, 1, n) if(n % i == 0) r++;
    cout << r;
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    long long t;
    cin >> t;
    solve(t);
    // while (t--) {
    //     solve();
    //     cout << endl;
    // }
}