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
        int cnt = 0;
        bool flag = false;
        if(n%2 == 0 && n%5 == 0)
        {
            int a = n,  b = n;
            // cout << a << " " << b << endl;
            while (b < 200)
            {
                a--;
                b++;
                cnt++;
                
                if((a%2 != 0 && a%5 == 0 ) || (a%2 == 0 && a%5 != 0 ))
                {
                    flag = true;
                    break;
                }
                if((b%2 != 0 && b%5 == 0 ) || (b%2 == 0 && b%5 != 0 ))
                {
                    flag = true;
                    break;
                }
                // cout << a << " " << b << endl;
            }
            if(flag)
                cout << cnt << endl;
        }
        else if(n%2 == 0 || n%5 == 0)
        {
            flag = true;
            cout << 0 << endl;
        }
        if(!flag)
        {
           int a = n,  b = n;
            // cout << a << " " << b << endl;
            while (b < 200)
            {
                a--;
                b++;
                cnt++;
                
                if((a%2 != 0 && a%5 == 0 ) || (a%2 == 0 && a%5 != 0 ))
                {
                    flag = true;
                    break;
                }
                if((b%2 != 0 && b%5 == 0 ) || (b%2 == 0 && b%5 != 0 ))
                {
                    flag = true;
                    break;
                }
                // cout << a << " " << b << endl;
            }
            if(flag)
                cout << cnt << endl;
        }

    }
    
    return 0;
}