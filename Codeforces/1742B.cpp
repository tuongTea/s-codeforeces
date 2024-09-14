#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)

void solve(){
    int n, a[1000], r = 0;
    cin >> n;
    forn(i, n) cin >> a[i];
    sort(a ,a + n);
    forn(i, n - 1) 
        if (a[i] < a[i + 1]) r++;
    if(r + 1 == n) cout << "YES";
    else cout << "NO";
    
    
    
}

int main()
{
    int k;
    cin >> k;
    while(k--){
        solve();
        cout << endl;
    }
}