#include <iostream>
using namespace std;
 
int n, a[10000], s;

int main() {
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        cin >> s ;
        a[s] = i ;
        
    }

    for (int i = 1; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[n];
    

 
}