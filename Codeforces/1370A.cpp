#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if (a % 2 == 0) cout << a / 2 << endl;
        else cout << (a - 1) / 2 << endl;
    }
    
    
}