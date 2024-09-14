#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, mi;
    vector <int> a;
    vector <int> b;
    vector <int> c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (t == 1) a.push_back(i);
        if (t == 2) b.push_back(i);
        if (t == 3) c.push_back(i);
    }
    if (c.size() == 0 || a.size() == 0 || b.size() == 0) cout << 0;
    else
    {
        mi = min(a.size(), b.size());
        if (mi > c.size()) mi = c.size();
        cout << mi << endl;
    
        for (int i = 1; i <= mi; i++)
        {
            cout << a.front() << " " << b.front() << " " << c.front() << endl;
            a.erase(a.begin());
            b.erase(b.begin());
            c.erase(c.begin());
        }
    }
    
    
    
    
}
