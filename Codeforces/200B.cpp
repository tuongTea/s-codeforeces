#include <bits/stdc++.h>
using namespace std;
 
int n, a, s;
double result;
int main() {
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> s ;
        a = a + s;
    }
    result = (double)a/n;
    cout << setprecision(12) << fixed << result;
    

 
}