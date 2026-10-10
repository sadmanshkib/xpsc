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
        map<int, int> feq;
        int need = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            int w = x - i + 1;
            feq[w]++;
            need = max(need, feq[w]);
        }
        cout << n - need << endl;
    }

    return 0;
}


