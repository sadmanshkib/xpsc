#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[4];
        int mx = INT_MIN;
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
            mx = max(mx,a[i]);
        }

        cout << mx << endl;
    }
    
    return 0;
}