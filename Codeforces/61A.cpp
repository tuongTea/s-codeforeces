#include <bits/stdc++.h>
using namespace std;
 
string n, a, s, m;
double result;
int main() {
    cin >> n >> m ;
    for (int i = 0; i < n.length(); i++)
    {
       if (n[i] == m[i]) a = a + '0';
       else a = a + '1';
    }
    cout << a;
    
    

 
}