#include <iostream>
 
using namespace std;
 
int main()
{
    int n,m,tmp,result,a[10000];
    string b;
    result = 0;
    cin>>n;
    for (int i = 1 ; i <= n ; i++)
    {
        tmp = 0;
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[j] ;
            tmp = tmp + a[j];
        }
        if ( tmp >= 2) result = result + 1;
        
    }
    cout<<result;
    
    
}