#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;
    int i = 0;
    while (i < st.length())
    {
        if (st[i] == '-')
        {
            if(st[i + 1] == '.') cout << 1;
            else cout << 2;
            i += 2;
        }
        else 
        {
             cout << 0;
             i++;
        }
    }
}
