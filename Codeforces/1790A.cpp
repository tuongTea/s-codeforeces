#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 0; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"

void solve() {
    ll r = 0;
    string st, s = "3141592653589793238462643383279";
    cin >> st;
    if(st[0] == s[0]){
        rep(i, st.length())
            if(s[i] != st[i]) break;
            else r++;
        cout << r;
    }
    else cout << 0;
    
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