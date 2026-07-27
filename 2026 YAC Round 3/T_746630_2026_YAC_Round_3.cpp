#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;

    cin >> k;
    while (k--)
    {
        int cnt = 0;
        bool flag = true;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 0)
                cnt++;
            if (v[i] != 0)
            {
                // cnt++;
                if (v[i] != a[i])
                    flag = false;
            }
        }
        // cout << cnt << " "  << n << endl;
        if (cnt != n)
        {
            if (!flag)
                cout << "Ai Ya" << endl;
            else
                cout << "Bingo!!!" << endl;
        }
        else
            cout << "Ai Ya" << endl;
       
    }

    return 0;
}