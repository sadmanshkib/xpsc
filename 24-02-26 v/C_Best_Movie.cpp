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
        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }

        int min = INT_MAX;
        bool have = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i].first >= 7 && a[i].second <= min)
            {
                min = a[i].second;
                have = true;
            }
        }

        if (!have)
            cout << -1 << endl;
        else
            cout << min << endl;
    }

    return 0;
}