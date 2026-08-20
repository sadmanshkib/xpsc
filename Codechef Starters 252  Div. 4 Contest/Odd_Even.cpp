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

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        // for(int x : a)
        // cout << x << " ";

        vector<int> even, odd;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even.push_back(a[i]);
            else
                odd.push_back(a[i]);
        }

        int e_s = even.size();
        int o_s = odd.size();

        if (e_s == o_s)
            cout << e_s + o_s << endl;
        else if (e_s < o_s)
        {
            cout << 2 * e_s + 1 << endl;
        }
        else
            cout << 2 * o_s + 1 << endl;

        // cout << e_s << o_s << endl;

        // for(int x : even)
        // cout << x << " ";
        // cout << endl;
        // for(int x : odd)
        // cout << x << " ";
        // cout << endl;
    }

    return 0;
}