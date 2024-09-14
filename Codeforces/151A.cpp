#include <bits/stdc++.h>
using namespace std;

int n, k, l, c, d, p, nl, np, result = 100000, aa[1000], a;
bool boo = true;
int main() {
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    a = k * l;
    aa[0] = a / nl;
    aa[1] = c * d;
    aa[2] = p / np;
    for (int i = 0; i < 3; i++)
    {
        result = min(aa[i], result);
        
    }
    cout << result / n;

}