#include <iostream>
using namespace std;


string st, st1 ;
int d, c ;

int main() {

    cin >> st >> st1 ;
    c = st.length() ;
    for (int i = 0; i < c; i++)
    {
        if (st[i] == st1[c - 1 - i]) d++;
    }
    if (d == c) cout << "YES";
    else cout<<"NO" ;

}

