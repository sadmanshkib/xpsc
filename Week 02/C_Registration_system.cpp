#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    map<string, int> m;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if(!m[s])
            cout << "OK" << endl;
        else
            cout << s << m[s] << endl;
        m[s]++;
    }
    
   
    return 0;
}