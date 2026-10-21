#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int ans = 0;
        long long int i = 1;
        long long int j = 0;

        while (i <= n)
        {
            long long int p = n / i;
            j = n / p;
            ans += p * (j - i + 1);
            i = j + 1;
        }

        cout << ans - n << endl;
    }

    return 0;
}