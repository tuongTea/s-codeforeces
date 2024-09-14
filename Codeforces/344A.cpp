#include <iostream>
using namespace std;
 
int n, m[100000], q, c = 0;

int main() {
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        if (m[i] != m[i - 1])
        {
            c++;
        }
        
        
    }
    cout << c;
    

 
}