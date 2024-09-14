#include <iostream>
using namespace std;



int in, o, result = 0, n, sum ;

int main() {
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
       cin >> in >> o ;
       sum = sum - in + o ;
       if (result < sum)
       {
         result  = sum;
       }
       
    }
    cout << result;
    
    

}

