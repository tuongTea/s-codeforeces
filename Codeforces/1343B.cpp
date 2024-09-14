#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a;
    cin >> n;
    for (int  i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 4 != 0) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            int t = 0, t2 = 1, sum = 0, sum1 = 1;
            for (int i = 1; i <= a / 2; i++)
            {
                t += 2;
                cout << t << " ";
                sum += t;
            }
            cout << 1 << " ";
            for (int i = 2; i < a / 2; i++)
            {
                t2 += 2;
                cout << t2 << " ";
                sum1 += t2;
            }
            cout << sum - sum1 << endl;
        }
        
    }
    
}