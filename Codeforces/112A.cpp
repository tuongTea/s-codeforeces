#include<iostream>
 
#include<algorithm>
using namespace std;
 
 
 
int main()
{
    int result;
    string n,m,st,a,b,s1,s2;
    result = 0;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1 == s2) cout<<0;
    else {
        if (s1 > s2) cout<<1;
        if (s1 < s2) cout<<-1;
    }
    
    
  
}