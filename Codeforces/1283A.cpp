#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, h, m;
    
    cin >> n;
    while (n--)
    {
       cin >> h >> m;
       if (m > 0) cout << (24 - (h + 1)) * 60 + 60 - m << endl;
       else cout << (24 - h) * 60 << endl;
    }
}