#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve() {
    int b, c, k, b1[1000], c1[1000], r = 0;
    cin >> b >> c >> k;
    forn(i, b) cin >> b1[i];
    forn(i, c) cin >> c1[i];
    for (int i = 0; i < b; i++)
    {
        for(int j = 0; j < c; j++){
            if(b1[i] + c1[j] <= k) r++;
        }
    }
    cout << r;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}