#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define forn(i, n) for (int i = 1; i <= int(n); i++)

void solve() {
    ll r = 0, n, m, c = 0, b = 1;
    cin >> n;
    m = n;
    while (m!=0)
    {  
        m /= 10;
        c++;
        b += pow(10,c);
    }
    if(n < 10) cout << n;
    else
    {
        cout << n / (b/10) + 9 * (c - 1);
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