#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;

        }
        sort(a,a+n);
        int cnt[n];
        memset(cnt,0,sizeof(cnt));
        cnt[0]= a[0];
        int ind = 0;
        int un = 1;
        for (int i = 1; i < n; i++)
        {
            if(a[i] == a[i-1])
            {
                cnt[ind]++;
            }
            if(a[i] != a[i-1])
            {
                ind++;
                cnt[ind]++;
                un++;
            }
        }
        // cout << un-k << endl;

        sort(cnt,cnt+n);
        int cind= 0;
        for (int i = 0; i < n; i++)
        {
            if(cnt[i]!= 0)
                {
                    cind = i;
                    break;
                }
        }
        

        for (int i = cind+1; i < n; i++)
        {
            if(k == 0)
                    break;
            if(cnt[i]==0)
                continue;
            while (cnt[i] != 0)
            {
                cnt[i]--;
                k--;
                if(k == 0)
                    break;
            }
            

            // cout << cnt[i] << " ";
        }
        
        int fans=0;
        for (int i = 0; i < n; i++)
        {
            if(cnt[i]!=0)
            {
                fans++;
            }
        }

        if(n == k)
            cout << 0 << endl;
        else
            cout << fans << endl;
        
        



        // for (int i = 0; i < n; i++)
        // {
        //     cout << cnt[i] << " ";
        // }
        // cout << endl << un;
        
        

        
    }
    
    return 0;
}