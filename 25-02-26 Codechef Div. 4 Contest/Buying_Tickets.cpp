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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        int emt = 0;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);
            if (c == '0')
                emt++;
            else
                a[i] = 500;
        }
        sort(a, a + n);
        if (emt >= k)
        {
            int sum = 0;
            for (int i = 0; i < k; i++)
            {
                sum += a[i];
            }

            cout << sum << endl;
        }
        else
            cout << "-1" << endl;
    }

    return 0;
}