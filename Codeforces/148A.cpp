#include <bits/stdc++.h>
using namespace std;
 
int c, k, l, m, n, d;
string st, st2;
bool b;

int main() {
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++)
    {
        if (i % k != 0 && i % l !=0 && i % m != 0 && i % n != 0)
        {
            c++;
        }
        
    }
    
    cout << d - c;
    

}
