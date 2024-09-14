#include <bits/stdc++.h>
using namespace std;
 
long long n, a[100], s, m, c;
double result;
int main() {
    cin >> a[0] >> a[1] >> a[2] >> a[3] ;
    for (int i = 0; i < 4; i++)
    {
       for (int j = i + 1; j < 4; j++)
       {
         if (a[i] == a[j]) 
         {
          c++;
          break;
         }
       
    }
   
 
}
 cout << c;
}