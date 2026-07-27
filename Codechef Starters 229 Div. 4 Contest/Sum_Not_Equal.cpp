#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int>> a(n);
        int zero =0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            a[i] = {val,i+1};
            if(val == 0)
                zero++;
        }
        sort(a.begin(),a.end());

        if(zero == n)
            cout << -1 << endl;
        else
            {
                int i,j,k;
                i = a[n-1].second;
                j = a[n-2].second;
                k = a[0].second;

                cout << i << " " << j << " " << k << endl;
            }
        
    }
    
    
    return 0;
}