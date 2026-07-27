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
        string s;
        int n;
        cin >> n;
        cin >> s;
        bool a[27] = {false};
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            int x = s[i] - 97;
            if (!a[x])
            {
                a[x] = true;
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end());
        map<char, char> m;
        for (int i = 0; i < v.size(); i++)
        {
            m[v[i]] = v[v.size() - 1 - i];
        }

        // for(auto k : m)
        // {
        //     cout << k.first << " -> " << k.second << endl;
        // }

        for (int i = 0; i < n; i++)
        {
            s[i] = m[s[i]];
        }
        cout << s;

        // for(char c : v)
        //     cout << c << " ";
        cout << endl;
    }

    return 0;
}