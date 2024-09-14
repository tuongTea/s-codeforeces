#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a, k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        a = n / 3;
        if (n % 3 == 0) cout << a << " " << a ;
        else{
            if (a + (2 * (a + 1)) == n) cout << a << " " << a + 1;
            else cout << a + 1 << " " << a;
        
        }
        cout << endl;
    }
    
    
}