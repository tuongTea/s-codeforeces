#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, r = 0, a[10000], l;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    l = 5 - k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= l) r++;    
    }
    cout << r / 3;
    
    
}
