#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    vector<int> vt;
    string str;
    int c = 0,a = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++){
        if (str[i] != '+') {
            a = int(str[i] - '0');
            vt.push_back(a);
            c++;
        }
    }
    sort(vt.begin(), vt.end());
    for (int i = 0; i < c ; i++) {
        cout << vt[i] ;
        if (i == c - 1) break;
        cout <<"+";
    }
        
}
 