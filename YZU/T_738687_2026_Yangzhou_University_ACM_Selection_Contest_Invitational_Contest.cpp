#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if(s == "LN")
        cout << "NEU" << endl;

    else if (s == "JX")
        cout << "JXNU" << endl;

    else if (s == "NX")
        cout << "NIST" << endl;

    else if (s == "HB")
        cout << "WHU" << endl;

    else if (s == "SN")
        cout << "NWPU" << endl;

    else if (s == "GD")
        cout << "CUHKSZ" << endl;

    else
        cout << -1 << endl;
    
    
    return 0;
}