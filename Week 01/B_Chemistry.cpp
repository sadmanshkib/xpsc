#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[27] = {0};
        char c[n + 1];
        for (int i = 0; i < n; i++)
        {
            char y;
            cin >> y;
            c[i] = y;
            a[y - 97]++;
        }
        int cnt = 0;

        for (int i = 0; i < 27; i++)
        {
            if (a[i] % 2 != 0)
            {
                cnt++;
                // char z = i+97;
                // cout << z << " -> " << a[i] << endl;
            }
        }

        if(n-x == 1)
            cout << "YES" << endl;
        
    }

    return 0;
}