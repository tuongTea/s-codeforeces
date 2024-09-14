#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, l, r) for(ll i = l; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)



int t, n, a, odd, even, total;
  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> t;
    while (t--){
        cin >> n;
        odd = 0;
        even = 0;
        total = 0;
        for (int i = 0; i < n; i++){
            cin >> a;
            if (a % 2 == 0) even = 1;
            else odd = 1;
            total += a;
        }
        if ((odd == 0 || even == 0) && total % 2 == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}