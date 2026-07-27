#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    int cnt = 0;
    for (size_t i = 0; i < n  ; i++)
    {
        cin >> a[i];
    }

    bool have = false;

    sort(a,a+n);

    for (int i = 0; i < n; i++)
    {
        if(a[i] == x)
        cnt++;
        if(a[i] < x)
        {
            cnt--;
        }
        if(a[i] > x)
        {
            cnt = cnt + x;
            have = true;
            break;
        }
    }

    if(!have)
    {
        cnt = cnt + x;
    }
    cout << cnt << endl;
    


    return 0;
}