#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;

        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());
        int ans = 0;
        for (int i = 0; i < min(n, (k + 1)); i++)
        {
            ans = ans + a[i];
        }

        cout << ans << endl;
    }

    return 0;
}