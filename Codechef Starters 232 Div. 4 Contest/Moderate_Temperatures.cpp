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
        int n;
        cin >> n;
        int a[n];
        int mn = INT_MAX, mx = INT_MIN;
        int mncnt = 0, mxcnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(mx < a[i])
                {
                    mx = a[i];
                    mxcnt = 0;
                }

            if(mn > a[i])
                {
                    mn = a[i];
                    mncnt = 0;
                }

            if(a[i] == mx)
                mxcnt++;
            if(a[i] == mn)
                mncnt++;
        }
        int ans = n - mncnt - mxcnt;
        
        if(ans > 0)
            cout << ans << endl;
        else
            cout << 0 << endl;
    }
    
    return 0;
}