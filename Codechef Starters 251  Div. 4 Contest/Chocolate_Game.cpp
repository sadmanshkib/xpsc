#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // cout << "test case >> " << t << endl;
        int n;
        cin >> n;
        int s = n;
        int a[n];
        int total = 0;
        int alice = 0;
        int boob = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }

        if (total % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {

                    alice += a[i];
                    s--;
                    total -= a[i];
                    // cout << i << " alice :" << alice << endl;
                }
            }

            alice += total - s;
            // cout << total << " " << n << " alice :" << alice << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    boob += a[i];
                    s--;
                    total -= a[i];
                }
            }
            boob += total - s;
        }

        if (s % 2 == 0)
        {
            alice += s / 2;
            boob += s / 2;
        }
        else
        {
            // if (total % 2 == 0)
            // {
            //     alice += (s / 2) + 1;
            //     boob += s / 2;
            // }
            // else
            // {
                boob += (s / 2) + 1;
                alice += s / 2;
            // }
        }

        cout << alice << endl;
    }

    return 0;
}