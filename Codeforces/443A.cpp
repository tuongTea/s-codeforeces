#include <bits/stdc++.h>
using namespace std;
 
int n = 3, a[1000], r, mi, m, l, b[1000];
string st;
bool boo = true; 
 
int main() {
    cin >> st;
    char r = int(st[1]);
    char l = int(st[2]); 
    if (r == 125) cout << 0;
    else if (l == 125) cout << 1;
    
    else{
        a[r]++;
        while (boo)
        {
            cin >> st;
            char r = int(st[0]);
            char m = int(st[1]);
                a[r]++;
            if (m == 125) boo = false;
        }

        for (int i = 65; i < 123; i++)
            {
                if (a[i] > 0)
                {
                    mi++;
                }
            }
    cout << mi;
    }
}
