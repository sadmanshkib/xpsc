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
        long long int x,y;
        cin >> x >> y;
        int s;
        if(x == 2)
            cout << y << endl;
        else
            {
                long long int a,b;
                a = x-2;
                if(a > y)
                    cout << 0 << endl;
                else
                {
                    cout << y-a << endl;
                }
                
            }

    }
    
    return 0;
}