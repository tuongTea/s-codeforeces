#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 0; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"
#define MAX(a, b) ((a) > (b) ? (a) : (b))
void solve() {
    ll a[N], m[N], b, c, n, r = 0;
    cin >> n ;
    rep(i, n) {
        cin >> a[i];
        m[i] = a[i];
    }
    sort(a, a + n);
    b = a[n-2];
    c = a[n-1];
    rep(i, n){
        if(m[i] == c) cout << m[i] - b << " ";
        else cout << m[i] - c << " ";
    }
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