#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, result = 0, t ;
string st;
int main() {
    cin >> n >> t >> st;
    while (t--)
    {
        for (int i = 1; i < n; i++)
        {
            if (st[i - 1] == 'B' && st[i] == 'G')
            {
                st[i - 1] = 'G' ;
                st[i] = 'B';
                ++i;
            }
        }
    }
cout << st;
    
    
    

}
