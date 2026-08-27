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

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans = max(ans, a[i]);

            for (int j = i + 1; j < n; j++)
            {
                if (a[i] <= a[j])
                {
                    cout << ans << a[i] << a[j] << endl;
                    ans = max(ans, a[i] + a[j]);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}