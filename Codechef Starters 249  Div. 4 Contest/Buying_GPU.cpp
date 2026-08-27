#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        float x,y,z;
        cin >> x >> y >>z;
        if(y >= z)
            cout << -1 << endl;
        else
        {
            // cout << ceil(x/z)+ceil(y/z) << endl;
            int i = 0;
            int m =0;
            while (m < x)
            {
                x = x+y;
                m+=z;
                i++;
            }
            cout << i << endl;
        }
        
    }
    
    return 0;
}