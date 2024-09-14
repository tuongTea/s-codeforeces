#include <bits/stdc++.h>
using namespace std;

int n, p = 0, q = 0, c, a[1000], mi, ma, m, b[1000];
bool boo = true;
int main() {
    for (int i = 1; i <= 4; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + 5);
    p = 5;
    while (p--)
    {
        if (a[p] != b[4]) cout << b[4] - a[p] << " ";
        if (p == 1) break;
    }
    
}