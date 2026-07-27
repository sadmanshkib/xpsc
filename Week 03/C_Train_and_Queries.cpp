#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;

        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            mp[a].insert(i);
        }

        // for(auto [x,y] : mp)
        // {
        //     cout << x << " ->";
        //     for(auto p : y)
        //         cout << p << " ";
        //         cout << endl;
        // }

        for (int i = 1; i <= m; i++)
        {
            int p, q;
            cin >> p >> q;

            if (mp.find(p) == mp.end() || mp.find(q) == mp.end())
                cout << "NO" << endl;
            else
            {
                int st_s_be, en_s_end;
                st_s_be = *mp[p].begin();
                en_s_end = *mp[q].rbegin();
                if (st_s_be < en_s_end)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}