#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, t, sum1 = 0, sum2 = 0, s1 = 0, s2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> t;
        if (c > t) 
        {
            sum1++;
            s1 += c;
        }
        if (c < t) 
        { 
            sum2++;
            s2 += t;
        }
    }
    
    if (sum1 > sum2) cout << "Mishka";
    if (sum1 < sum2) cout << "Chris";
    if (sum1 == sum2) cout << "Friendship is magic!^^";
    
}
