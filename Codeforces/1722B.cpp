#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve() {
    int n, r = 0;
    string s1, s2;
    cin >> n;
    cin >> s1 >> s2;
    rep(i, 0, n) {
        if(s1[i] == 'G') s1[i] = 'B';
        if(s2[i] == 'G') s2[i] = 'B';
    }
    rep(i, 0, n)
        if(s1[i] != s2[i]) r++;
    if(r != 0) cout << "NO";
    else cout << "YES";
    // cout << s1 << endl << s2;
    
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