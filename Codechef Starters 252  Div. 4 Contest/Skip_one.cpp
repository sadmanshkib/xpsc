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

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        b[0] = a[0];
        int ind = 0, mx = a[0];
        for (int i = 1; i < n; i++)
        {
            mx = max(mx, a[i]);
            b[i] = a[i] + b[i - 1];
            if (b[i] - mx > k)
            {
                ind = i;
                break;
            }
            if (i == n - 1)
                ind = i;
        }
        // cout << mx << " " << ind << " " << b[ind] << endl;

        if (b[ind] - mx <= k)
            cout << ind + 1 << endl;
        else
            cout << ind << endl;
    }

    return 0;
}