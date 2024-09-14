#include <bits/stdc++.h>
using namespace std;
int b[1000001];

bool prime() {
    for(int i = 0; i <= 1000001; i++) 
        b[i] = 1;
        b[0] = b[1] = 0; 
    for(int i = 2; i <= 1000; i++) 
    { 
        if(b[i])
        { 
            for(int j=i*i; j <= 1000000; j+=i) 
            { 
                b[j] = 0;     
            }
        }   
    }   
}

int main() {
    prime();
    
    int n = 0, a, c, p[1000], r = 0;
    cin >> a >> c;
    for(int i = 0; i <= 50; i++)
        if (b[i] == 1) p[n++] = i;
    
    for (int i = 0; i < n; i++)
    {
        if(p[i] == a && p[i + 1] == c) {
            r = 1;
        }   
    }
    if (r == 1) cout << "YES";
    else cout << "NO";
}
