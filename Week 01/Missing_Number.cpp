#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}