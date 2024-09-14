#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a, b, c, d, m1, m2, m3, m4;
    
    cin >> n;
    while (n--)
    {
       cin >> a >> b >> c >> d;
       m1 = max(a, b);
       m2 = min(a, b);
       m3 = max(c, d);
       m4 = min(c, d);
       if(m4 > m1 || m2 > m3 ) cout << "NO" << endl;
       else cout << "YES" << endl;
    }
}