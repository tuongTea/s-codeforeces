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
    ll a, b, c, r;
    cin >> a >> b >> c;
    cout << MAX(0 ,MAX(c, b) + 1 - a) << " " << MAX(0 ,MAX(a, c) + 1 - b) << " " << MAX(0 ,MAX(a, b) + 1 - c);

    
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