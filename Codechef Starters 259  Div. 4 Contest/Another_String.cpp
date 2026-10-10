#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string a, b;

        cin >> n >> a >> b;

        int cnta = 0, cntb = 0;

        for (char c : a)
            if (c == '1')
                cnta++;

        for (char c : b)
            if (c == '1')
                cntb++;

        if (cnta % 2 == cntb % 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}