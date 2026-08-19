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
        string s;
        cin >> s;
        int l = 0, r = 0;
        string ans = s;
        while (r < n)
        {
            char first = s[l];
            string cur;

            while (l < n && s[l] == first)
            {
                cur += first;
                l++;
            }
            r = l;
            char second = s[r];
            while (r < n && s[r] == second)
            {
                cur += s[r];
                r++;
            }
            // cout << cur << endl;

            ans = min(ans, cur);
        }
        cout << ans << endl;
    }

    return 0;
}