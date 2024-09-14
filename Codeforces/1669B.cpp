#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)


void solve(){
    ll k, m = -1, n, a[200001] = {}, r = 0, b[200001] = {};
    cin >> n;
    rep(i, 0, n) cin >> a[i];
    sort(a, a + n);
    rep(i, 2, n) 
        if(a[i - 2] == a[i] && a[i - 1] == a[i]) {
            m = a[i];
            break;
    }
    cout << m;
    
}

  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--){
        solve();
        cout << endl;
    }
}