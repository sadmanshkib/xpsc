#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        int a[n+1];
        memset(a,0,sizeof(a));
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a[x] = 1;
        }
        
        int p = 1;
        while (n--)
        {
            if(!k)
                break;
            if(a[p] != 1)
                {cout << p << " ";
                k--;}
            p++;

        }
        
        cout << endl;
        
        
    }
    
    return 0;
}