#include <bits/stdc++.h>
using namespace std;

int n, a, b;
string st;


void solve(){
    int c = 1, z = 0;
    bool boo = false;
    cin >> a >> b;
    if (a <= b && a > 2) cout << 2;
    if (a < 3) cout << 1;
    if (a > b && a > 2) {
        c = (a - 2) / b;
        if((a - 2) % b == 0) cout << c + 1;
        else cout << c + 2;
    }
    
    
}

int main()
{
    int k;
    cin >> k;
    while(k--){
        solve();
        cout << endl;
    }
}