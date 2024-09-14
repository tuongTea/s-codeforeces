#include <bits/stdc++.h>
using namespace std;

void solve(){
    string st;
    cin >> st;
    cout << st[0];
    for (int i = 1; i < st.length() - 1; i++)
    {
        if(st[i] == st[i + 1])
        {
            cout << st[i];
            i++;
        } 
    }
    cout << st[st.length() - 1];
}


int main()
{
    int r, n;
    cin >> n;
    while(n--)
    {
        solve();
        cout << endl;
    }
    
    
}
