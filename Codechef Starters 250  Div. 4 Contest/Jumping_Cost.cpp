#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // for (int i = 1; i <= n; i++)
        // {
        //     cout << a[i] << " " ;
        // }
        // cout << endl;

        int ans = 0;
        int pos = 0;

        for (int i = 1; i < n; ++i)
        {
            if (a[i] > 0)
            {
                // cout << i << " " << a[i] << endl;
                pos += a[i];
                int curr = pos - (i+1) + 1;
                ans = max(ans, curr);
            }
        }
        cout << ans << endl;
    }

    return 0;
}