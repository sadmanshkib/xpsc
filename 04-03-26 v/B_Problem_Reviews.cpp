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
        int n;
        cin >> n;
        int a[n];
        bool good = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= 4)
            {

                cout << "NO" << endl;
                good = false;
            }
        }
        if (good)
            cout << "YES" << endl;
    }

    return 0;
}