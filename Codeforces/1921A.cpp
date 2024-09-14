#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"<<endl
#define pys cout<<"YES"<<endl

void solve(){
    ll k, m = 0, n, m1 = N, m2 = N, ma1 = -N, ma2 = -N;
    rep(i, 1, 4){
        cin >> n >> m;
        m1 = min(m1, n);
        ma1 = max(ma1, n);
        m2 = min(m2, m);
        ma2 = max(ma2, m);
    }
    cout << (ma1 - m1) * (ma2 - m2);
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