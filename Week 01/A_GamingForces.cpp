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

        sort(a, a + n);

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        int cnt = 0;
        // if (n % 2 == 0)
        // {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                continue;
            if (a[i] == 1)
            {
                if (a[i] == a[i + 1])
                {
                    cnt++;
                    a[i] = 0;
                    a[i + 1] = 0;
                    continue;
                }

                a[i] = 0;
                cnt++;
                continue;
            }
            if (a[i] > 1)
            {
                a[i] = 0;
                cnt++;
            }
        }
        cout << cnt << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
    }

    return 0;
}