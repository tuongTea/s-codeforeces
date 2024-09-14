#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a = 0, b = 0, c = 0, r = 0;
    
    cin >> n;
    while (n >= r)
    {
       a = a + 1;
       c = c + 1;
       b += a;
       r += b;
       
    }
    cout << c - 1;
    
    
    
    
}