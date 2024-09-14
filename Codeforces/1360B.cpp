#include <bits/stdc++.h>
using namespace std;

// #define forn(i, n) for(int i = 0; i < n; i++)

void solve(){
    int n, r = 100000, t;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    r = 100000;
    for(int i = 0; i < n - 1; i++) {
        t = a[i + 1] - a[i];
        if (t >= 0) r = min(r,t);
        // cout << a[i] << " ";
    }
    cout << r;
    
}

int main() {
    int k;
    
    cin >> k;
    while (k--)
    {
       solve();
       cout << endl;
    }
}