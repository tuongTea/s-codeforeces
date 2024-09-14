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
    ll a = 0, b = 0, r = 0, c = 0, n, m;
    string st, s1, s2, s3, s4, s5;
    cin >> st;
    rep(i, 5){
        cin >> s1;
        if(st[0] == s1[0]) r++;
        if(st[1] == s1[1]) r++;
    }
    if(r > 0) cout << "YES";
    else cout << "NO";
    
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