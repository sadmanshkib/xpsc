#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t,m;
    cin >> n >> t >> m;
    while (n--)
    {
        string s;
        
        cin >> s;
        if(s == "Online")
        {
            int a,b;
            cin >> a >> b;
            if(b-a >= t)
                cout << "Cheating" << endl;
            else
                cout << "Normal" << endl;
        }
        else
        {
            int a;
            cin >> a;
            if(a >= m)
                cout << "Cheating" << endl;
            else
                cout << "Normal" << endl;
        }
    }
    
    return 0;
}