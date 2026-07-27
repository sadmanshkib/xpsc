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
        int y = INT_MAX, a, b;
        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b;

            if (a > y)
                y = a;
            else if (y > b)
                y = b;
            else if (a <= y && y <= b)
                y = y;
        }
        cout << y << endl;
    }

    return 0;
}