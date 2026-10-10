#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int dx = 0, dy = 0;
        bool havU = false, havD = false, havL = false, havR = false;
        for (char c : s)
        {
            if (c == 'U')
            {
                dy++;
                havU = true;
            }
            else if (c == 'D')
            {
                dy--;
                havD = true;
            }
            else if (c == 'L')
            {
                dx--;
                havL = true;
            }
            else if (c == 'R')
            {
                dx++;
                havR = true;
            }
        }

        bool yes = false;

        if (dx == 2 && dy == 0 && havR)
            yes = true;
        if (dx == -2 && dy == 0 && havL)
            yes = true;
        if (dx == 0 && dy == 2 && havU)
            yes = true;
        if (dx == 0 && dy == -2 && havD)
            yes = true;

        if (yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}