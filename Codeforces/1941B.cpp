#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define forn(i, n) for (int i = 1; i <= int(n); i++)

void solve() {
    bool b = true;
    int n, a[N+5], r = 0;
    cin >> n;
    forn(i, n + 2) a[i] = 0;
    forn(i, n) cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
            int z = a[i];
            if (a[i] < 0) b = false;
            a[i + 1] -= 2*z;
            a[i + 2] -= z;
            a[i] -= z;
            
    }
    if(a[n + 1] < 0 || a[n + 2] < 0) b = false;
    if(b) cout << "YES";
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