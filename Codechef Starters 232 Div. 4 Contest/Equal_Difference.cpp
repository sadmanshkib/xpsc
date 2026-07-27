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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<int, int> mp;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            
            for (int j = i; j <= n; j++)
            {
                if (a[i - 1] - a[j] == i - 1 - j)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}