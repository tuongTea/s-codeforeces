#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int k, w, n, result = 0;
    cin >> k >> w >> n ;
    for(int i = 1; i <= n; i++)
        result = result + k * i;
    if (result <= w)
    {
        cout << 0;
    }
    else cout << result - w;
    
}