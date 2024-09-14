#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve() {
    int r = 1, a, b, c, i;
    cin >> a >> b >> c;
    int k = a;
    if(a % 2 == 0) {
        rep(i, 1, k){
            if(a % 2 == 0 && a > 0) {
                r *= 2;
                a = a / 2;
            }
        }
    }
    k = b;
    if(b % 2 == 0) {
        rep(i, 1, k){
            if(b % 2 == 0 && b > 0) {
                r *= 2;
                b = b / 2;
            }
        }
    }
    if( r >= c) cout << "YES";
    else cout <<"NO";
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    long long t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}