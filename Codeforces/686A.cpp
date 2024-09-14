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
    ll a, b = 0, c, r, n, m = 0;
    char s;
    cin >> n >> m;
    rep(i, n){
        cin >> s >> a;
        if (s == '+') m += a;
        else {
             if (m >= a) m -= a; 
             else b++;
        }
    }
    cout << m << " " << b;

    
}
  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    
    solve();
    // while (t--){
    //     solve();
    //     cout << endl;
    // }
}