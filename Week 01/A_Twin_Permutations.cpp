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
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool x[n];
        memset(x, false, sizeof(x));

        b[0] = 1;
        x[1] = true;

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        

        for (int i = 1; i < n; i++)
        {
            int z = abs(a[i - 1] + b[i - 1] - a[i]);
            // cout << a[i - 1] << " " << b[i - 1] << " " << a[i] << " " <<   z << endl;
            if(z<1)
                z=1;
            while (x[z])
            {
                z++;
            }
            b[i] = z;
            x[z] = true;
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}