#include <bits/stdc++.h>
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 0; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"
#define MAX(a, b) ((a) > (b) ? (a) : (b))
void solve() {
    ll a[N], m[N], b, c, n, r = 0;
    string st, s1, s2;
    cin >> st;
    s1 = st.substr(0,2);
    s2 = st.substr(3,5);
    b = stoll(s1);
    n = stoll(s2);
    c = b - 12;
    if(b == 12 && n >= 0  ) cout << st << " " << "PM";
    else if(b == 0 && n >= 0) cout << 12 << ':' << s2 << " " << "AM";
    else if(b < 12) cout << st << " " << "AM";
    else if (c <10) cout << 0 << c << ':' << s2 << " " << "PM";
    else cout << c << ':' << s2 << " " << "PM";
    
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