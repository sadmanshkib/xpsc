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
        char a[n], b[n];
        int aeve = 0, bodd = 0;
        int aodd = 0, beven = 0;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0 && a[i] == '1')
                aeve++;
            else if (i % 2 == 1 && a[i] == '1')
                aodd++;
            // cout << a[i];
        }
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == '0' && i % 2 == 0)
                beven++;
            else if (b[i] == '0' && i % 2 == 1)
                bodd++;
        }

        // cout << endl << aeve << " " << aodd << " " << beven << " " << bodd << endl;

        if (aeve <= bodd && aodd <= beven)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}