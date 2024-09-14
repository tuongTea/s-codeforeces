#include <iostream>
using namespace std;
 
int n, a, d;
string st;
 
int main() {
    cin >> n >> st;
    for (int i = 0; i < n ; i++)
    {
        if (st[i] == 'A')
        {
            a++;
        }
        else {
            d++;
        } 
    };
    if (a == d)
    {
        cout << "Friendship" ;
    }
    else if (a > d) cout << "Anton" ;
    else cout << "Danik" ;
    
}
