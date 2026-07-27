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
        set<int> s;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int p;
            cin >> p;
            s.insert(p);
            // v.insert(p);
            v.push_back(p);
        }
        bool have = 0;

        int l = 0, r = n - 1;
        while (l < r)
        {
            int mn = *s.begin();
            int mx = *--s.end();

            if (v[l] != mn && v[l] != mx && v[r] != mn && v[r] != mx)
            {
                cout << l + 1 << " " << r + 1 << endl;
                have = 1;
                break;
            }
            else
            {
                if (v[l] == mn || v[l] == mx)
                {
                    s.erase(v[l]);
                    l++;
                }
                if (v[r] == mn || v[r] == mx)
                {
                    s.erase(v[r]);
                    r--;
                }
            }
        }
        if(!have)
        cout << -1 << endl;
    }
    return 0;
}