#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353
long long int power(long long int a, int b)
{
    long long ans = 1;
    while (b>0)
    {
        if(b&1)
            ans = ans *a%MOD;

        a = a*a%MOD;
        b = b/2;
    }
    return ans;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
        }

        long long fact = 1;

        for (int i = 1; i <= k; i++)
        {
            fact = fact * i % MOD;
        }

        long long int p = power(k, n - k);

        long long ans = fact * p % MOD;
        cout << ans << endl;
    }

    return 0;
}