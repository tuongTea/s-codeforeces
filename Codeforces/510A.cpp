#include <bits/stdc++.h>
using namespace std;

int n, m, c;
char a[1000][1000];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            a[i][j] = '#';
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            {
                if (i % 2 == 0)
                {
                    a[i][j] = '.';
                }
                if (j == m && a[i][1] == '.') a[i][j] = '#';
                if (i % 4 == 0 && j == 1) {
                    a[i][j] = '#';
                    a[i][m] = '.';
                }
            }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            {
                cout << a[i][j];
            }
        cout << endl;
        
    }
}