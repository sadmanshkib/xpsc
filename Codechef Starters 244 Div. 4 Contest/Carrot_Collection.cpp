#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,l,r;
        cin >> n >> l >> r;
        int arr[n];
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            arr[i] = p;
            // v.insert(p);
            if(i < l-1 && i > r-1)
                if(mx < p)
                    mx = p;
        }
        cout << mx << endl;
        for(auto x : arr)
            cout << x << " ";
        cout << endl;
        
    }
    
    return 0;
}