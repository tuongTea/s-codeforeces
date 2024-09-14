#include <bits/stdc++.h>
using namespace std;
 
int n, a[1000], r, sum, m, l, b[1000];
string str;
bool boo = true; 

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] == b[j]) sum++;
            if (b[i] == a[j]) sum++;
        }
        
    }
    cout << sum;
    
    
}
