#include <bits/stdc++.h>
using namespace std;
 
int n, p = 0, q = 0, c, a[1000], mi, ma, m;
bool boo = true;
int main() {
    int x, y;
    int i = 1;
    cin >> x >> y;
    if (((x - y) % 10 == 0) || x % 10 == 0)
    {
        cout << 1;
    }
    else {
        while (i++)
        {
            m = x * i;
            if (((m - y) % 10 == 0) || m % 10 == 0) break;
        }
        cout << i;
    }
    
    
}
