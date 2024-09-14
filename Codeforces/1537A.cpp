#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 0; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"

void solve(){
    ll a[N], b[N], r = 0, c = 0, n, m, l = 0;
    cin >> n;
    rep(i, n) {
        cin >> m;
        r += m;
    }
    if(r == n ) cout << 0;
    else if(r <= n) cout << 1;
    else cout << r - n;
}
  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    // solve();
    while (t--){
        solve();
        cout << endl;
    }
}