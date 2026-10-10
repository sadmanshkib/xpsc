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
        // if (n > k)
        //     cout << 0 << endl;
        // else
        // {
        //     if (2 * n == k)
        //         cout << k << endl;
        //     else
        //         cout << (k / n) * 2 << endl;
        // }
        cout << max(0, 2 * (k - n)) << endl;
        
    }

    return 0;
}