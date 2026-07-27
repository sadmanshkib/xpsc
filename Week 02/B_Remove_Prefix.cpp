#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
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
        map<int,int> m;
        int ind = 0;
        for (int i = n-1; i >= 0; i--)
        {
            if(!m[a[i]])
            {
                m[a[i]] = 1;
            }
            else
            {
                ind = i+1;
                break;
            }
        }
        cout << ind << endl;

        
        
    }
    

    return 0;
}