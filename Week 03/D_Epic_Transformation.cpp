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
        map<int, int> mp;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        priority_queue<int> p;

        for (auto [x, y] : mp)
        {
            p.push(y);
        }

        while (!p.empty())
        {
            if (p.size() < 2)
            {
                break;
            }
            int x, y;
            x = p.top();
            p.pop();
            y = p.top();
            p.pop();
            x--;
            y--;
            if (x > 0)
                p.push(x);
            if (y > 0)
                p.push(y);
        }
        int ans = 0;

        while (!p.empty())
        {
            ans += p.top();
            p.pop();
        }
        cout << ans << endl;
    }

    return 0;
}