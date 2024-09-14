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
    ll a = 0, b = 0, r = 0, c = 0, n, m, l = 0;
    cin >> a >> b >> c;
    m = max(a,b);
    n = min(a,b);
    while(r <= c){
        r = m + n;
        n = m;
        m = r;
        l++;
    }
     cout << l;
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