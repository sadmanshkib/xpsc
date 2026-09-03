#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;

        int ans = ((a + 1) / 2) * p + ((b + 1) / 2) * q;

        // cout << ans << endl;

        for (int i = 1; i <= min(a, b); i++)
        {
            int ans2 = i * r;

            ans2 += ((a - i + 1) / 2) * p + ((b - i + 1) / 2) * q;

            // cout << ans2 << endl;
            // cout << ans << endl;

            ans = min(ans, ans2);
        }

        cout << ans << endl;
    }

    return 0;
}