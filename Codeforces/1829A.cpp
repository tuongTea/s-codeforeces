#include <bits/stdc++.h>
using namespace std;

void solve(){
    string st, s = "codeforces";
    int r = 0;
    cin >> st;
    for (int i = 0; i < 10; i++)
        if(st[i] != s[i]) r++;
    cout << r;
    
}

int main()
{
    int k;
    cin >> k;
    while(k--){
        solve();
        cout << endl;
    }
}