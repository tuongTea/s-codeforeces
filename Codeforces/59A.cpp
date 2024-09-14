#include<bits/stdc++.h>
using namespace std;
 
 
void upcs(string &s){
    for (int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
    }
}
 
int main()
{
   int a = 0,b =0,c = 0;
   string st;
   cin >> st;
   for (int i = 0; i < st.size(); i++){
    if (int(st[i]) >= 97 ) a++;
    else b++;
   }
    if (a>=b) {
         transform(st.begin(), st.end(), st.begin(), ::tolower);
         cout << st;
    }
    else {
         transform(st.begin(), st.end(), st.begin(), ::toupper);
         cout << st;
    }
   
}