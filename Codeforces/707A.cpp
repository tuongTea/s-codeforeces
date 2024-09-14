#include <bits/stdc++.h>
using namespace std;

int n, m, c, r = 0;
char a;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            if(a == 'C' || a == 'M' || a == 'Y') r++;
            
        }
    }
    if ( r > 0) cout << "#Color";
    else cout << "#Black&White";
    
}