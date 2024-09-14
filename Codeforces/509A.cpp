#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 1; i <= r; i++)

#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"

void solve(int n){
    ll a[1000][1000], b = 0, r = 0;
    rep(i, n){
        rep(j, n){
            if(i == 1 || j == 1) a[i][j] = 1;
            else a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    cout << a[n][n];
    

}
  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    solve(t);
    // while (t--){
    //     solve();
    //     cout << endl;
    // }
}