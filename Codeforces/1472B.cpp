#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve() {
  int n;
  cin >> n;
  int c1 = 0, c2 = 0;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    if (c == 1) {
      c1++;
    } else {
      c2++;
    }
  }
  int sum = (c1 + 2 * c2) / 2;
  if ((c1 + 2 * c2) % 2 != 0) {
    cout << "NO\n";
  } else {
    if (sum % 2 == 0 || (sum % 2 == 1 && c1 != 0)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}