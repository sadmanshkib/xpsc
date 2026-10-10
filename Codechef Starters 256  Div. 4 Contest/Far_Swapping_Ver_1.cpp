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
        int p[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        bool cn = true;
        while (cn)
        {
            cn = false;
            for (int i = 1; i < n; i++)
            {
                int m = abs(p[i] - p[i + 1]);
                if (m > 1 && p[i] >= p[i + 1])
                {
                    int tmp = p[i];
                    p[i] = p[i + 1];
                    p[i + 1] = tmp;
                    cn = true;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}