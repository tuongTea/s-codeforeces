#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 1; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"
#define MAX(a, b) ((a) > (b) ? (a) : (b))
void solve() {
    ll a, b, c, n, r = 0;
    cin >> n >> a >> b;
    if(b >= a * 2) r = n * a;
    else {
        if (n % 2 == 0) r = n / 2 * b;
        else r = ((n - 1) / 2) * b + a;
    }
    cout << r;
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