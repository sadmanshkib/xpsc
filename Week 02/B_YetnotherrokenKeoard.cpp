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
        vector<pair<char, int>> v1;
        vector<pair<char, int>> v2;
        int ind = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                if (v2.size() > 0)
                    v2.pop_back();
                ;
            }
            else if (s[i] == 'b')
            {
                if (v1.size() > 0)
                    v1.pop_back();
                ;
            }
            else
            {
                pair<char, int> p = {s[i], ind};
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    v1.push_back(p);
                    ind++;
                }
                else
                {
                    v2.push_back(p);
                    ind++;
                }
            }
        }

        for (pair<char, int> p : v2)
            v1.push_back(p);

        sort(v1.begin(), v1.end(), [](pair<char, int> a, pair<char, int> b)
             { return a.second < b.second; });

        for (int i = 0; i < v1.size(); i++)
        {
            cout << v1[i].first;
        }
        cout << endl;
    }

    return 0;
}