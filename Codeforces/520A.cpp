#include <bits/stdc++.h>
using namespace std;
 
int n, a[1000], r, mi, ma;
string st, st2;
bool b;

int main() {
    cin >> n >> st;
    
    for (int i = 0; i < n; i++)
    {
        char st1 = tolower(st[i]);
        r = int(st1);
        a[r]++; 
    }
    
    for (int i = 97; i < 123; i++)
    {
        if(a[i] > 0) b = true;
        else {
            b = false;
            break;
        }
    }
    if (b == true) cout << "YES";
    else cout << "NO";

}
