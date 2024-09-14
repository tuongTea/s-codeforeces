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
    ll a[N], m[N], b, c, n = 0, r = 0;
    string st;
    cin >> r;
    cin >> st;
    rep(i, r){
        if(st[i] == 'x' && st[i + 1] == 'x'){
            if(st[i + 2] == 'x') n++;
        }
    }
    cout << n;
    
}
  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    // cin >> t;
    solve();
    // while (t--){
    //     solve();
    //     cout << endl;
    // }
}