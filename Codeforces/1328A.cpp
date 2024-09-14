#include <iostream>
using namespace std;
 
long long n, a, b, c, r ;
string st;

 
int main() {
    cin >> n;
    for (long long  i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a % b == 0) cout << 0 << endl;
        else{
            c = ( a / b ) + 1 ; 
            r = ( c * b ) - a;
            cout << r << endl;
        }
        
    }
    
} 
