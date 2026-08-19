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
        int cnt = 0;
        if (n % 3 == 0)
            cout << 0 << endl;
        else if ((n + 1) % 3 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int nx = n / 5 * 5 + 5;
            if (nx % 3 == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}