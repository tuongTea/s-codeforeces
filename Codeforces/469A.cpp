#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int n, a[1000], c[1000], d , p, q;
string st;
bool b = false; 

int main() {
    cin >> n >> p ;
    for (int i = 1; i <= p; i++)
        cin >> a[i] ;
    cin >> q ;
    for (int i = p + 1; i <= p + q; i++)
        cin >> a[i] ;
    // sort(a, a + p + q);
    for (int i = 1; i <= p + q; i++)
    {
        c[a[i]]++ ;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (c[i] > 0) b = true;
        else {
            b = false;
            break;
        }
    };
    if (b == true) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}
