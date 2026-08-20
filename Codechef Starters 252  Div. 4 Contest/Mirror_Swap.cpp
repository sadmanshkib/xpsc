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
        int a[2*n + 1];
        for (int i = 1; i <= 2 * n; i++)
        {
            cin >> a[i];
        }

        // for (int i = 1; i <= 2*n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        for (int i = 1; i <=  n; i++)
        {
            
            if (a[i] < a[(2 * n)-i+1])
            {
                // cout << a[i] << a[(2 * n)-i+1] << endl;
                int temp = a[i];
                a[i] = a[(2 * n)-i+1];
                a[(2 * n)-i+1] = temp;
            }
        }

        // for (int i = 1; i <= 2*n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
            

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
    }

    return 0;
}