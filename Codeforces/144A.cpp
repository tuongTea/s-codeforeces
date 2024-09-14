#include <bits/stdc++.h>
using namespace std;
 
int n, a[1000], r, mi, ma, b[1000];
string st;
 
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n + 1);
    if (a[1] == b[n]) ma = 1;
    else{
        for (int i = 1; i <= n; i++)
            {
                if (a[i] == b[n]) {
                    ma = i ;
                    break;}
            }
    }

     for (int i = 1; i <= n; i++)
        {
            if (a[i] == b[1]) mi = i ;
        }
    
    r = ma - 1 + n - mi ;
    if (ma > mi)
    {
        cout << r - 1;
    }
    else cout << r;
    
    
}
