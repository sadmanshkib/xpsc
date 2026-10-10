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
        vector<int> a[n];
        vector<int> feq(105, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            feq[x]++;
        }

        int mx = 0;

        while (feq[mx] > 0)
        {
            mx++;
        }

        long long int nxt = 0;

        for (int i = mx + 2; i <= 100; i++)
        {
            nxt += feq[i] *(i-(mx+1));
        }

        for (int i = 1; i < mx; i++)
        {
            if (feq[i] > 1)
                nxt +=  (feq[i] - 1) * i;
        }

        if (nxt % 2 == 1)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}