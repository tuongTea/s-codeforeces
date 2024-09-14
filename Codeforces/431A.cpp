#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], r = 0;
    string st;
    cin >> a[1] >> a[2] >> a[3] >> a[4];
    cin >> st;
    for (int i = 0; i < st.length(); i++)
    {
        int c = int(st[i]) - 48;
        r += a[c];
    }
    cout << r;
    
}
