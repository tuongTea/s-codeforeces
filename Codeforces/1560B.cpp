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
    ll a, b, c, n, r, d;
    string s1, s2;
    cin >> a >> b >> c;
    r = abs(a - b) ;
    n = r * 2;
    d = (n / 2) + c;
    if(a > n || b > n || c > n) cout << -1;
    else {
        while(d > n) d -= n;
        cout << d;
     }
}
  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    //solve();
    while (t--){
        solve();
        cout << endl;
    }
}