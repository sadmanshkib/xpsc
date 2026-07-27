#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ind = 1;
        int bmn = 0, bmx = 0;
        for (char c : s)
        {

            if (c == 'B')
            {
                if (bmn == 0)
                    bmn = ind;
                bmx = ind;
            }
            ind++;
        }
        if (n == 1 && s[0] == 'B')
            cout << 1 << endl;
        else
        {
            if (bmn == 0 && bmx == 0)
                cout << 0 << endl;
            else if (bmx - bmn == 0)
                cout << 1 << endl;
            else
                cout << bmx - bmn + 1 << endl;
        }
    }

    return 0;
}