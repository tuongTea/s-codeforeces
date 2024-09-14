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
    ll a = 0, b = 0, r = 0, c = 0, n;
    string st;
    cin >> n >> a;
    rep(i, n) {
        cin >> b;
        if(a == b) r++;
    }
    if(r > 0) cout << "YES";
    else cout << "NO";

}
  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    // solve(t);
    while (t--){
        solve();
        cout << endl;
    }
}