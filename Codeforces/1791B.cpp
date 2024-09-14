#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve() {
    int r = 0, x = 0, y = 0, n;
    string st;
    cin >> n;
    cin >> st;
    rep(i, 0, n){
        if(st[i] == 'U') y++;
        if(st[i] == 'D') y--;
        if(st[i] == 'R') x++;
        if(st[i] == 'L') x--;
        if(x == 1 && y == 1) r++;
    }
    if(r > 0) cout << "YES";
    else cout << "NO";
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