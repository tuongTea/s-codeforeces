#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)


void solve(){
    ll k, m = 0, n, a = 0, r = 0, b[200001] = {};
    cin >> n;
    rep(i, 1, n) {
        cin >> k;
        if(k == 0) {
            r++;
            m = max(r, m);
        }
        else r = 0;
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