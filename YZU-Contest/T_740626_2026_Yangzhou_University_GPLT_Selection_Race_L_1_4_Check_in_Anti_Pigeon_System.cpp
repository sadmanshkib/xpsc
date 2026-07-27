#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin >> n >> x;

    int a[n];
    long long int sum =0;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            cnt = 1;
        }
        else
        {
            // cout << i << endl;
            sum += cnt;
            if(cnt < x)
                cnt++;
        }
    }
    cout << sum;
    
    return 0;
}