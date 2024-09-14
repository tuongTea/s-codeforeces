#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve(int n) {
    int r = 0, x = 0, y = 0, c = 1, m = 1;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 1, n){
        if(a[i] > a[i - 1]) c++;
        else c = 1;
        m = max(m, c);
    }
    cout << m;

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