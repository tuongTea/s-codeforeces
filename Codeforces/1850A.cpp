#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, a, b, c;
    cin >> n;
    while (n--) 
    {
        cin >> a >> b >> c;
        if ( a + b >= 10 || a + c >= 10 || c + b >= 10) cout << "YES" << endl; 
        else cout << "NO" << endl;
    }
}
