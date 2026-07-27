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
        for (int i = 1; i < n + 1; i++)
        {
            cin >> a[i];
        }

        // for (int i = 1; i < n + 1; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        for (int i = 1; i <= n / 2; i++)
        {
            // cout << a[i] << " " << a[i * 2] << endl;
            for (int j = i * 2; j <= n; j *= 2)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }

            // cout << a[i] << " " << a[i * 2] << endl;
        }

        bool flag = true;

        // for (int i = 1; i < n + 1; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = false;

                // cout << a[i] << " " << a[i + 1];
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}