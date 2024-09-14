#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a, b, c;
    
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c;
        if(a == b) cout << c << endl;
        if(b == c) cout << a << endl;
        if(c == a) cout << b << endl;
    }
    
    
}