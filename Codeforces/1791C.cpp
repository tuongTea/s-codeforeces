#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)


void solve(){
    ll k, odd = 0, even = 0, n;
    string st;
    cin >> n;
    cin >> st;
    rep(i, 0, n) {
        if(st[i] == st[n - 1 - i]) {
            cout << n - (i * 2);
            return;
        }
    }
    cout << 0;
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