#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
   int a,b,c = 0;
   cin >> a >> b ;
   while(a <= b){
    c++;
    a = a * 3;
    b = b * 2;
   
   }
   cout<<c;
}
 