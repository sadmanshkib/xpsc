#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int c[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> c[i];
        }

        int ans = INT_MAX;

        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    continue;
                if (i <= k + 1 && j >= n - k && j - i <= 2 * k + 1)
                    ans = min(ans, c[i] + c[j]);
            }
        }
        if (ans != INT_MAX)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}