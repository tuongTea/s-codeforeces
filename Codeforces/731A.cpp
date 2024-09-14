#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)


int main()
{
    string st;
    char a[10001];
    int c = 0, r = 0;
    cin >> st;
    for (char i = 'a'; i <= 'n'; i++)
    {
        a[i] = c;
        c = c + 1;
    }
    c = c - 1;
    for (char i = 'o'; i <= 'z'; i++)
    {
        --c;
        a[i] = c;
    }
    
    
    r = a[st[0]];
    // cout << r << endl;
    for(int i = 1; i < st.length(); i++){
        if(abs(st[i] - st[i - 1]) > 13) {
            
            r += a[st[i]] + a[st[i - 1]];
            // cout << a[st[i]] + a[st[i - 1]] << endl;
        }
        else {
            r += abs(st[i] - st[i - 1]);
            // cout << abs(st[i] - st[i - 1]) << endl;
        }
    }
    cout << r;
}