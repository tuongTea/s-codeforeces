#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 0; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"<<endl
#define pys cout<<"YES"<<endl

void solve(){
    ll a = 0, b = 0, r = 0;
    string st;
    cin >> st;
    rep(i, st.length()) 
        if(st[i] == 'B') b++;
        else a++;
    if(a == b) cout << "YES";
    else cout << "NO";
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