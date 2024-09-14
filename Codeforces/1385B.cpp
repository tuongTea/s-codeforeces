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
    ll a[N], b[N], r = 0, c = 0, n, m, l = 0;
    cin >> n;
    rep(i, n * 2) cin >> a[i];
    rep(i, n * 2) 
        for (ll j = i + 1; j < n * 2; j++)
        {
            if(a[i] == a[j]) {
                b[c] = a[i]; 
                c = c + 1;
            }
        }
    
    rep(i, c) cout << b[i] << " ";
        
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