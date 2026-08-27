#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,p;
        cin >> x >> y >>p;

        if(x*y >= p)
        cout << 0 << endl;
        else
        {
            int i =0;
            while (x*y < p)
            {
                if(x < y)
                    x++;
                else
                    y++;
                i++;
            }
            cout << i << endl;
        }    
    }
    
    return 0;
}