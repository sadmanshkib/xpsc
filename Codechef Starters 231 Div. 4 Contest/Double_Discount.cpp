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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            v[i].first = b[i];
            v[i].second = a[i];
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i].first << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i].second << " ";
        // }

        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (flag)
                break;
            for (int j = i + 1; j < n; j++)
            {
                if (flag)
                    break;
                int p1 = max(v[i].second, v[j].second);
                int p2 = min(v[i].second, v[j].second);
                int tast = v[i].first + v[j].first;
                if (p1 / 2 > 100)
                {
                    int total = p1 - 100 + p2;
                    if (total <= k)
                    {
                        flag = true;
                        cout << tast << endl;
                        break;
                    }
                }
                else
                {
                    int total = p1 / 2 + p2;
                    if (total <= k)
                    {
                        flag = true;
                        cout << tast << endl;
                        break;
                    }
                }
            }
        }

        if (!flag)
            cout << 0 << endl;
    }

    return 0;
}