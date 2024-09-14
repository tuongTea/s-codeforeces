
#include<bits/stdc++.h>
using namespace std;
 
 

int main()
{
   int a = 0,b =0,c = 0;
   string st;
   cin >> st;
   for (int i = 0; i < st.size(); i++){
        if (st[i] == '7' || st[i] == '4') b++;
   }
    if ((b  == 4 || b  == 7 ) && b != 0) cout << "YES";
    else cout << "NO";
   
}
 
 