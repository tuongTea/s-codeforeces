#include <iostream>
using namespace std;



int n, h, result = 0, f ;

int main() {
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
       cin >> f;
       if (f > h) result = result + 2;
       else result = result + 1;
    }
    cout << result;
    
    

}
