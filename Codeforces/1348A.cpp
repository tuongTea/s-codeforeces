#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"<<endl
#define pys cout<<"YES"<<endl

void solve(){
    ll k = 0, maxx = -N, minn = N, n, r = 0;
    cin >> n;
    k = pow(2,n);
    rep(i, 1, n / 2) k += pow(2, i);
    rep(i, n/2, n) r += pow(2, i);
    cout << k - r;
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