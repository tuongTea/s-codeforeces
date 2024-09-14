#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, n, k, z, l = 0;
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        cin >> x >> y >> n;
        if (n - n % x + y <= n) 
        {
			cout << n - n % x + y << endl;
		} 
        else 
        {
			cout << n - n % x - (x - y) << endl;
		}
    }

    
    
}
