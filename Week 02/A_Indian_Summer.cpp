#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++)
    {
        pair<string, string> a;
        cin >> a.first >> a.second;
        bool flag = false;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == a)
            {
                flag = true;
                break;
                ;
            }
        }
        if (flag == false)
        {
            v.push_back(a);
        }
    }
    cout << v.size() << endl;

    return 0;
}