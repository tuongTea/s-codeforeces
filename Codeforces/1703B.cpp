#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, r = 0, c = 0;
    char a[1000] ={};
    string st;
    cin >> n;
    cin >> st;
    for (int i = 0; i < n; i++) a[st[i]]++;
    for (char i = 'A'; i <= 'Z'; i++)
    {   
        r += a[i];
        if (a[i] != 0) c++;
    }
    cout << r + c;
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