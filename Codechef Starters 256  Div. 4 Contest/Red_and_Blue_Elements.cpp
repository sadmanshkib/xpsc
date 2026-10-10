#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];

        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        // for (long long int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        long long int b[n];
        b[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            b[i] = b[i - 1] + a[i];
        }

        long long int total = b[n - 1];
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long int sr;
            if (i == 0)
                sr = 0;
            else if (i <= n - i)
                sr = total - b[n - i - 1];
            else
                sr = b[i - 1];

            long long int sb = total - sr;
            long long int cb = n - i;
            long long int now = sr * cb + sb * i;

            ans = max(ans, now);
        }
        cout << ans << endl;
    }

    return 0;
}