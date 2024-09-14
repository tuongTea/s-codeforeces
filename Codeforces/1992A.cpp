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
    ll a[N], b, c;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    rep(i, 5){
        a[0] = a[0] + 1;
        sort(a, a + 3);
    }
    // sort(a, a + 3);
    cout << a[0] * a[1] * a[2];
    
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