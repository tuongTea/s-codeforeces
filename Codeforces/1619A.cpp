#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a, b;
    string st;
    cin >> n;
    while(n--)
    {
        cin >> st;
        a = st.length();
        if (a % 2 != 0) cout << "NO" << endl;
        else{
            int r = 0;
            b = a / 2;
            for (int i = 0; i < b; i++)
            {
                if (st[i] == st[b + i]) r++;
            }
            if (r == b) cout << "YES" << endl;
            else cout << "NO" << endl;
            
        }
    }
    
    
}