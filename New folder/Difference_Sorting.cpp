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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<pair<int, int>> p;

        bool pal = false;

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                // cout << i << endl;
                // cout << i << a[i] << a[j] << endl;
                if(a[i] > a[j] && (abs(a[i]-a[j]) >= abs(i-j)))
                {
                    // cout << i << a[i] << a[j] << endl;
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    
                    int s = min(a[i],a[j]);
                    int b = max(a[i],a[j]);

                    p.insert({i+1,j+1});
                    i = -1;
                    // j = i+1;
                   break;
                
                }
            }
            
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " " ;
        // }

        for(auto x : p)
            cout << x.first << " " << x.second << endl;
        
    }

    return 0;
}