#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    set<int> s;

    vector<int> cnt(n + 1);
    for (int i = n; i > 0; i--)
    {

        s.insert(a[i]);
        cnt[i] = s.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        cout << cnt[x] << endl;
    }

    return 0;
}