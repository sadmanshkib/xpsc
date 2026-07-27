#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        for (int i = 0; i < n; i++)
        {

            if (k > 0)
            {
                if (a[i] > 5)
                {
                    sum += a[i];
                    sum -= 5;
                    k--;
                }
            }
            else
            {
                if (a[i] > 10)
                {
                    sum += a[i];
                    sum -= 10;
                }
            }
            // cout << sum << endl;
        }

        if (sum > 0)
            cout << sum << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}