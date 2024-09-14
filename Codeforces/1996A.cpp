#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 2; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"
#define MAX(a, b) ((a) > (b) ? (a) : (b))
void solve() {
    ll n, m;
    cin >> n ;
    if(n % 4 == 0) cout << n / 4;
    else cout << (n / 4) + 1;
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