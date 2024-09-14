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
    ll a, b, c;
    cin >> a >> b >> c;
    if(a < b && b < c) cout << "STAIR";
    else if(a < b && b > c) cout << "PEAK";
    else cout << "NONE";
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