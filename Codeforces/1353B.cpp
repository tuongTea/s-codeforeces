#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int n, a, b, m[1000], m1[1000];
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        int r = 0;
        forn(i, a) cin >> m[i];
        forn(i, a) cin >> m1[i];
        sort(m, m + a);
        sort(m1, m1 + a, greater<int>());
        forn(i, a){
            if(b == 0) break;
            m[i] = max(m[i], m1[i]);
            b--;
        }
        forn(i, a) r += m[i];
        cout << r << endl;
        
    }
    
    
}