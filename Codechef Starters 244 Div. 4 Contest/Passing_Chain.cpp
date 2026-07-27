#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x = 1;
        while (n > k)
        {
            n = n - k;
            x = x + k;
        }
        cout << x << endl;
    }
    return 0;
}