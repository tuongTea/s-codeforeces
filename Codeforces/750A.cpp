#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, q = 0, z = 0, p;
	cin >> n >> k;
    p = 240 - k;
    for (int i = 1; i <= n; i++)
    {
        q = q + ( 5 * i );
        z++;
        
        if (q >= p)
        {
            break;
        }
    }
    
    if (p >= q ) cout << z;
    else cout << z - 1;
    
    
}