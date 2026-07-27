#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int k;
    cin >> n >> k;
    long long int a[n];
    vector<long long int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
        if (i > 0)
        {
            long long int x = a[i] + a[i-1];
            v.push_back(x);
        }
    }

    sort(a, a + n, greater<int>());
    


    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= k)
            cnt++;
    }
    cout << cnt;

    return 0;
}