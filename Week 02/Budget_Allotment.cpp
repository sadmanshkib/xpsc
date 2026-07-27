#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int cnt = 0, low = 0, lowv = 0;
        long long int ext = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= x)
            {
                cnt++;
                ext += a[i] - x;
                // cout << ext << endl;
            }
            // else
            // {
            //     low++;
            //     // cout << a[i] << endl;
            //     lowv += a[i];
            // }
        }
        sort(a,a+n,greater<int>());
        for (int i = 0; i < n; i++)
        {
            if(ext < 1)
                break;
            if(a[i] < x)
            {
                if(x -a[i] <= ext)
                    {
                        cnt++;
                        ext -= x-a[i];
                    }
            }
        }
        
        cout << cnt << endl;

        // cout << cnt << " " << lowv << " " << ext << " " << low << endl;
        // cout << ((lowv + ext) / low) << endl;
        // // cout << cnt +  << endl;
    }

    return 0;
}