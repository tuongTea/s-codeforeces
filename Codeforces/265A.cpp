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
    ll a[N], b, c, n = 0, r = 0;
    string s1, s2;
    cin >> s1 >> s2;
    r = max(s1.length(), s2.length());
    rep(i, r){
        if(s1[n] == s2[i]) n++;
        if(i == s2.length()) break;
    }
    cout << n + 1;
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