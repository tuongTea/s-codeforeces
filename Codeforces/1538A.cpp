#include <bits/stdc++.h>
#include "random"
using namespace std;

#define N 200000
#define ll long long
#define pb push_back
#define rep(i, r) for(ll i = 0; i < r; i++)
#define reprev(i, l, r) for(ll i = l; i >= r; i--)
#define pno cout<<"NO"
#define pys cout<<"YES"

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &e : v) {
        cin >> e;
    }
    int maxPos = max_element(v.begin(), v.end()) - v.begin();
    int minPos = min_element(v.begin(), v.end()) - v.begin();
    cout << min({
            max(maxPos, minPos) + 1,
            (n - 1) - min(maxPos, minPos) + 1,
            (n - 1) - maxPos + minPos + 2,
            (n - 1) - minPos + maxPos + 2
    });
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