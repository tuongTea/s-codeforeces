#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
   int a[10000],result = 0,c;
   string str;
   cin >> str;
   for(int i = 0; i <= str.size(); i++)
    {
        c = int(str[i]) - 96;
        a[c] = 1;
    }
   for(int i = 1; i <= 26; i++) {
        result = result + a[i];
        
   }
    
    if (result % 2 == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
 
    
}
 