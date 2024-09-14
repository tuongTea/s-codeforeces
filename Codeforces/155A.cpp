#include <bits/stdc++.h>
using namespace std;

int n, p = 0, q = 0, c, a[1000], mi, ma;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mi = a[0];
    ma = a[0];
    for (int i = 1; i < n; i++)
    {
        if (ma < a[i] && a[i] != ma)
        {
            ma = a[i];
            p++;
           
        };
        if (mi > a[i])
        {
            mi = a[i];
            p++;
        }
       
    }
    cout << p;
    

}