#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve() {
    long long s, r = 0;
    
    string st, m = "map", p = "pie";
    cin >> s >> st;
    
    
    for (long long i = 0; i < s - 1; i++)
    {
        string zz = "";
        zz += st[i], zz += st[i + 1], zz += st[i + 2], zz += st[i + 3], zz += st[i + 4];
        string z = "";
        z += st[i], z += st[i + 1], z += st[i + 2];
        if(zz == "mapie") i += 4, r++;
        else if(z == "map") i += 2, r++;
        else if(z == "pie") i += 2, r++;
    }
    cout << r;
    
    
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