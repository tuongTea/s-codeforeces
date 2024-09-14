#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a[3], b, c, d, mx = 0, r = 0;
    cin >> a[0] >> a[1] >> a[2] >> n;
    
        sort(a, a + 3);
        r = (a[2] - a[1]) + (a[2] - a[0]);
        if ( r > n) cout << "NO";
        else{
            if((n - r) % 3 == 0 || r == n) cout <<"YES";
            else cout << "NO";
        }
    
    
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