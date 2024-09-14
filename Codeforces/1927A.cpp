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
    ll k, maxx = -N, minn = N;
    cin >> k;
    string s;
    cin >> s;
    rep(i, 0, k){
        if(s[i] == 'B') {
            maxx = max(maxx, i);
            minn = min(minn, i); 
        }
    }
    cout << maxx - minn + 1;

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