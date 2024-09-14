#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w, b, a[1000], c, e;
    cin >> y >> w;
    if (y > w) c = y;
    else c = w;
    b = 6 - c + 1;
    for (int i = 1; i <= b; i++)
    {
        if (6 % i == 0 && b % i == 0) e = i;
    }
        if ( e > 0 ) cout << b / e << "/" << 6 / e;
        else cout << b << "/" << 6;
    
    
    
    
}
