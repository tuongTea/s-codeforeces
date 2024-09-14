#include <iostream>
using namespace std;
 
int n, a, s;

int main() {
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> s ;
        a = a + s;
    }
    if ( a == 0) cout << "EASY";
    else cout << "HARD";
    

 
}