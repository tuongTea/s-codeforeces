#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)


void solve(){
    ll k, odd = 0, even = 0, n;
    cin >> n;
    rep(i, 1, n) {
        cin >> k;
        if(k % 2 == 0) even += k;
        else odd += k;
    }
    if(even > odd) cout << "YES";
    else cout << "NO";
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