#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a, k, b;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        n = min(a, b);
        int m = max(a, b);
        if (n * 2 < m) cout << m * m << endl;
        else cout << pow(n + n, 2) << endl;
    }
    
    
}