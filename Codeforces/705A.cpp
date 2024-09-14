#include <iostream>
using namespace std;
 
int n, a, d;
string st;
 
int main() {
    cin >> n;
    if (n == 1) cout << "I hate it";
    else 
    {
    for (int i = 1; i < n; i++)
        {
            if (i % 2 != 0)
            {
            cout << "I hate that ";
            }
            else cout << "I love that ";
            
        }
     if (n % 2 != 0) cout << "I hate it";
     else cout << "I love it";
    }
} 
