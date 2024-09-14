#include <bits/stdc++.h>
using namespace std;
 
int n, a[1000], r, sum, m, l, b[1000];
string str;
bool boo = true; 

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;  
            if (str == "Tetrahedron")
                sum += 4;
            else if (str == "Cube")
                sum += 6;
            else if (str == "Octahedron")
                sum += 8;
            else if (str == "Dodecahedron")
                sum += 12;
            else if (str == "Icosahedron")
                sum += 20;
    }
    cout << sum;
}
