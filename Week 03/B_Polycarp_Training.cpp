#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int ans = 0, prob = 1;

    while (!s.empty())
    {
        auto LB = s.lower_bound(prob);

        if (LB != s.end())
        {
            ans++;
            s.erase(LB);
        }
        else
        {
            break;
        }
        prob++;
    }
    cout << ans << endl;

    return 0;
}