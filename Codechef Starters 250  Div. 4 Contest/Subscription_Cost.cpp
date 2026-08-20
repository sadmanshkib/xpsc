#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int pays = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < 3)
                pays += x;
            else
                pays += y;
        }
        cout << pays << endl;
    }

    return 0;
}