#include <iostream>
 
using namespace std;
 
int main()
{
    int n,m,tmp,result,a[100][100];
    string b;
    result =0;
    
    for (int i = 1 ; i <= 5 ; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin>> a[i][j] ;
            if (a[i][j] == 1) {
                cout<< abs(i - 3) + abs(j - 3);
                return 0;
            }
        }
        
    }
    
    
}