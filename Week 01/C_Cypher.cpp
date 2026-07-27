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
        for (int i = 0; i < n; i++)
        {
            int m;
            int cnt = a[i];
            cin >> m;
            cin.ignore();
            for (int i = 0; i < m; i++)
            {
                char c;
                
                cin >> c;
                if(c == 'U')
                {
                    cnt--;
                    if(cnt == -1)
                        cnt = 9;
                }
                else
                {
                    cnt++;
                    if(cnt == 10)
                        cnt = 0;
                }
                // cout << c;
                
            }
            cout << cnt << ' ';
            
        }
        cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        
    }

    return 0;
}