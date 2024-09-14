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
    ll a[1000], b = 0, r = 0;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if(a[2] == a[1]) {
        pys << endl;
        cout << a[0]<< " " << 1 << " " << a[2];
    }
    else pno;
    

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