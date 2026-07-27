#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    deque<string> d;

    while ((t--))
    {
        string s;
        cin >> s;
        d.push_front(s);
    }

    map<string, int> mp;

    for (string s : d)
    {

        if (!mp[s])
        {
            cout << s << endl;
            mp[s] = 1;
        }
    }

    return 0;
}