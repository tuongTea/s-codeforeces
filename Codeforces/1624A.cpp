#include <bits/stdc++.h>

using namespace std;


void solve() {
    int a[10000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[n - 1] - a[0];
    
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
        cout << endl;
    }
}
