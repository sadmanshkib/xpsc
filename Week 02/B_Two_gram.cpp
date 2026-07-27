#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    // cout << s << endl;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string k;
        k.push_back(s[i]);
        k.push_back(s[i + 1]);
        if (!mp[k])
        {
            mp[k] = 1;
        }
        else
            mp[k]++;
    }
    int mx = 0;
    string ans;
    for (auto k : mp)
    {
        if (k.second > mx)
        {
            mx = k.second;
            ans = k.first;
        }
    }
    cout << ans << endl;

    return 0;
}