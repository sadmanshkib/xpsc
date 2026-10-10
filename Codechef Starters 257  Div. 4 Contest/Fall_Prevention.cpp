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

        long long int asum = 0;
        int minneg = 0;

        bool yes = true;
        bool remove = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            asum += x;
            minneg = min(minneg, x);

            if (asum < 0)
            {
                if (remove)
                {
                    yes = false;
                }
                else
                {
                    asum -= minneg;
                    remove = true;
                }
            }
        }
        if (yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}