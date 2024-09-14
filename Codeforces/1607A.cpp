#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, k, r) for(ll i = k; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"

void solve(){
    ll a[N], b[N], r = 0, c = 0, n, m, l = 0;
    string st, s;
    cin >> st >> s;
    rep(i, 0, s.length()){
        rep(j, 0, st.length()){
            if(s[0] == st[j]) m = j + 1;
            if(s[i] == st[j]) {
                c = j + 1;
                r += abs(l - c);
                l = c;
            }
        }
    }
    cout << r - m;
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