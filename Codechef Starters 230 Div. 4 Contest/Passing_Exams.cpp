#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        int cnt=0;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            if(x>=50)
                cnt++;

        }
        if(cnt >=2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    return 0;
}