#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    int k, a[] = {1, 3, 6, 10}, c = 0;
    cin >> n;
    while (n--) 
    {
        c = 0;
        cin >> k;
        int b = k % 10;
        while (k != 0)
        {
            c++;
            k /= 10;
        }
        cout << (b - 1) * 10 + a[c - 1] << endl;
    }
}
