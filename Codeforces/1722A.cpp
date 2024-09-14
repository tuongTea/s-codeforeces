#include <bits/stdc++.h>
using namespace std;

int n, m, c, r = 0;
string st;

void solve(){
    string st, z = "Timur";
    cin >> n;
    cin >> st;
    sort(z.begin(), z.end());
    sort(st.begin(), st.end());
    if(st == z) cout << "YES";
    else cout << "NO";
}

int main()
{
    int k;
    cin >> k;
    while(k--){
        solve();
        cout << endl;
    }
}