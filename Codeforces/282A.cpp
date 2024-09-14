#include <iostream>
 
using namespace std;
 
int main()
{
    int n, m, tmp, result;
    string a,b;
    result = 0;
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a;
        b = a[1];
 
        if (b == "+") result++;
        if (b == "-") result--;
    }
    cout<<result;
    
    
}