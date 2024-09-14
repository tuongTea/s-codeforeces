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
    ll a = 0, b = 0, r = 0, c = 0, n, m;
    string st;
    cin >> a >> b >> c;
    m = (a+b);
    int q = min(a, b), p = max(a, b);
    while(q < p){
        p = p - c;
        q = q + c;
        r++;
    }
    cout << r;
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