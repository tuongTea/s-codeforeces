#include <iostream>
using namespace std;
 
int n, p, q, c;

int main() {
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q ;
        if (q - p > 1)
        {
            c++ ;
        }
        
    }
    cout << c;
    

 
}