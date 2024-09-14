#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,i;
    cin >> n ;
        ll a[n + 2];
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        ll left = 1, right = n, s1 = 0, s2 = 0;
        i = 1;
        while(left <= right)
        {
            if(i % 2 == 1)
            {
                if(a[left] >= a[right]) s1 += a[left++];
                else s1 += a[right--];
            }
            else
            {
                if(a[left] >= a[right]) s2 += a[left++];
                else s2 += a[right--];
            }
            i++;
        }
        cout << s1 << " " << s2 << endl;
}
