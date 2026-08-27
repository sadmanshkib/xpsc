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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        bool no = false;
        for (int i = 1; i <= n; i++)
        {
            int x, y;
            x = a[i];
            y = a[n + 1 - i];

            if (x == y)
                no = false;
            else if (x > y && (x + 1 == y || y + 1 == x || y - 1 == x || x - 1 == y || x + 1 == y + 1 || x - 1 == y - 1 || x + 1 == y - 1 || x - 1 == y + 1))
            {
                no = false;
            }
            else
                no = true;
        }

        if (!no)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}