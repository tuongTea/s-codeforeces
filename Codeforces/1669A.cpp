#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        if(r <= 1399) cout << "Division 4" << endl;
        else if(1400 <= r && r <= 1599) cout << "Division 3" << endl;
        else if(1600 <= r && r <= 1899) cout << "Division 2" << endl;
        else cout << "Division 1" << endl;
    }
    
}
