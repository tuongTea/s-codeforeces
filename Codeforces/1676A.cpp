#include <bits/stdc++.h>
using namespace std;

void solve(){
    string st;
    cin >> st;
    if (st[0] + st[1] + st[2] == st[3] + st [4] + st[5]) cout << "YES";
    else cout << "NO";    
}

int main()
{
    int n, k;
    cin >> n;
    while (n--)
    {
        solve();
        cout << endl;
    }
}
