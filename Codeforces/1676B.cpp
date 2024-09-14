#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, r = 0, c = 0, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++) if(a[i] != a[0]) r = r + ( a[i] - a[0]);
    cout << r;
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