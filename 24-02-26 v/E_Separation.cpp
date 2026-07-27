#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool have = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] < x  && a[j] > x)
            {
                cout << a[i] << " " << a[j] << endl;
                have = true;
                break;
            }
            if(a[i] > x && a[i] < x)
            {
                cout << a[i] << " " << a[j] << endl;
                have = true;
                break;
            }
        }

        if(have)
            cout << "No" << endl;
        else
            cout  << "Yes" << endl;
        
    }
    



    
    return 0;
}