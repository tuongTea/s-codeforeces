#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 1; i <= r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"
#define MAX(a, b) ((a) > (b) ? (a) : (b))

void solve() {
    ll a, b, c, n, r = 0;
    char ch;
    for(int i = 1; i <= 10; i++)
        for(int j = 1; j <= 10; j++){
            cin >> ch;
            if(ch == 'X') {
                if((i == 1 || j == 1) || (i == 10 || j == 10)) r += 1;
                else if((i == 2 || j == 2) || (i == 9 || j == 9)) r += 2;
                else if((i == 3 || j == 3) || (i == 8 || j == 8)) r += 3;
                else if((i == 4 || j == 4) || (i == 7 || j == 7)) r += 4;
                else r+= 5;
            }
    }
    cout << r;
}
  
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    // solve();
    while (t--){
        solve();
        cout << endl;
    }
}