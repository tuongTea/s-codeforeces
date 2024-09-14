#include <bits/stdc++.h>

using namespace std;


void solve() {
    int a[10000], n;
    string st;
    cin >> n;
    cin >> st;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        int f = n, l = -1;
        for (int j = 0; j < n; j++)
        {
            if(st[j] == i) {
                f = min(f, j);
                l = max(l, j);
            }
        }
        for (int z = f; z <= l; z++)
        {
            if (st[z] != i) {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
        cout << endl;
    }
}
