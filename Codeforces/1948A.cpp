#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)

void solve() {
    int r = 1, a, b, c, k, n;
    string st, s = "";
    cin >> n;
    if (n % 2 != 0){
        cout << "NO";
        return;
    }
    if(n < 3) cout <<"YES"<< endl << "AA";
    else {
        cout <<"YES" <<endl;
        rep(i, 1, n / 2)
        if(i % 2 == 0) s+="AA";
        else s+="BB";
        cout << s;
    }
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