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
        map<int, int> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // x[a[i]+1] += 1;
            // x[a[i]-1] += 1;
            x[a[i]]++;
        }
        int ans = 0;
        for (auto i : x)
        {

            ans = max(ans, i.second);
        }

        cout << (ans + 1) / 2 << endl;
        // if (x.size() != n)
        //     cout << x.size() << endl;
        // else
        //     cout << 1 << endl;
    }

    return 0;
}