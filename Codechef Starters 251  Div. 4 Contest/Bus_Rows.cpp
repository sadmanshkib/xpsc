#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        int fr, br;

        fr = ceil((double)x / m);
        br = n - fr + 1;
        cout << min(fr, br) << endl;
    }

    return 0;
}