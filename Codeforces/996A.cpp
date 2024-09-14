#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, r = 0;
    int a[] = {100 , 20, 10, 5, 1};
    cin >> n;
    for(int i = 0; i < 5; i++)
    {
        r += n / a[i];
        n = n % a[i];
    }
    cout << r << endl;
    return 0;
}