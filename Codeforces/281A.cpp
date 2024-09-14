#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    string str;
    cin >> str;
    if (str[0] > 96){
        cout<< char(str[0] - 32) ;
        for (int i = 1; i <str.size(); i++)
        {
            cout<<str[i];
        }
    }
    else cout<<str;
}
 
 