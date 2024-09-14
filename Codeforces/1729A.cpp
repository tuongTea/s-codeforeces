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
    ll k, a, b, c;
    cin >> a >> b >> c;
    if(c == 1) k = b - 1;
    else k = abs(b - c) + abs(c - 1);
    if(a - 1 < k) cout << 1;
    else if(a - 1 > k) cout << 2;
    else cout << 3;
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