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
    ll a = 0, b = 0, r = 0, c = 0;
    string st;
    rep(i, 3) {
        cin >> st;
        rep(i, 3)
            {
                if(st[i] == 'A') a++;
                if(st[i] == 'B') b++;
                if(st[i] == 'C') c++;
            }
    }
    if(a < 3) cout << 'A';
    if(b < 3) cout << 'B';
    if(c < 3) cout << 'C';

}
  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    // solve(t);
    while (t--){
        solve();
        cout << endl;
    }
}