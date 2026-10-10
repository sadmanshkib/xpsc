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

        string s, l;
        cin >> s >> l;

        bool left[26] = {false};

        for (char c : l)
        {
            left[c - 'a'] = true;
        }

        int ans = 0, cur = 0;
        bool phand = false;

        for (int i = 0; i < n; i++)
        {
            bool nleft = left[s[i] - 'a'];

            if (i == 0)
            {
                cur = 1;
                phand = nleft;
            }
            else if (nleft == phand)
            {
                cur++;
            }
            else
            {
                ans = max(ans, cur);
                cur = 1;
                phand = nleft;
            }
        }
        ans = max(ans, cur);
        cout << ans << endl;
    }

    return 0;
}