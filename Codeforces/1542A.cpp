#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve() {
    int n, r = 0, o = 0, e = 0;
    cin >> n;
    int m = n * 2;
    vector<int> a(m);
    rep(i, 0, m) cin >> a[i];
    rep(i, 0, m){
        if(a[i] % 2 == 0) o++;
        else e++;
    }
    if(e == o) cout << "YES";
    else cout << "NO";

    
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