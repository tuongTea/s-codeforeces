#include <bits/stdc++.h>
using namespace std;
 
int n, p = 0, q = 0, c = 0, a[1000], mi, ma, m;
bool boo = true;
int main() {
    int x, y, n;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        p = abs(x  - y);
        c = p / 10;
        q = p % 10;
        if (p == 0 || q == 0) cout << c << endl;
        else cout << c + 1 << endl;
        
    }
    
}
