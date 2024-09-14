#include <bits/stdc++.h>
using namespace std;
int n, m, r, c, a[1000000], p;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if(m == -1) {
            c++;
            if (p > 0) {
                c--;
                p--;
            }
        }
        else{
            p = p + m;
        }
    }
    cout << c;

}