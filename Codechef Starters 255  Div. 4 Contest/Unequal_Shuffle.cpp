#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        int n;
        cin >> n >> a >> b;

        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'a')
                x++;
            if (b[i] == 'a')
                y++;
        }

        if (x + y == n)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}