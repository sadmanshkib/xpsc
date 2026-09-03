#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> n >> k;
        int a[n];
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }

        int ans = 0;

        // cout << total << endl;
        int j = 0;
        int i = n - 1;
        for (int i = 0; i <= k; i++)
        {
            int current = total;

            for (int j = 0; j < i; j++)
            {
                current -= a[j];
                // cout << current << endl;
            }

            for (int j = n - 1; j >= n - (k - i); j--)
            {
                current -= a[j];
                // cout << current << endl;
            }

            ans = max(ans, current);
        }

        cout << ans << endl;
    }

    return 0;
}