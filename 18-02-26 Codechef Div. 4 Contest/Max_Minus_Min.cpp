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
        int a[n];
        int mx = 0;
        int ind;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > mx)
            {
                mx = a[i];
                ind = i;
            }
        }
        int mnm = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (i == ind)
            {
                continue;
            }
            int val = a[i];
            while (val * 2 < a[ind])
            {
                val *= 2;
            }
            mx = max(val,mx);
            mnm = min(val,mnm);

            cout << a[i] << " " << val  << " " << mnm << endl;
        }

        cout << mx - mnm << endl;
    }
    return 0;
}
