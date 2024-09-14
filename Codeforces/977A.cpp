#include <iostream>
using namespace std;
 
int n, k ;
 
int main() {
    cin >> n >> k ;
    while (k > 0)
    {
        k = k - 1;
        if (n % 10 == 0)
        {
           n = n / 10 ;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n ;
}