#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int ans;
        for (int i = 1; i <= n; i+=2)
        {
            if(a[i] == a[i+1])
            {
                ans = i+1;
            }
            
        }
        vector<int> v;
        v[1] = a[1];
        for (int i = 2; i < n; i++)
        {
            if(i%2 == 1)
                v.push_back(a[i]);
            int last = v.back();
        }
        
        cout << ans << endl;
        
    }
    return 0;
}
