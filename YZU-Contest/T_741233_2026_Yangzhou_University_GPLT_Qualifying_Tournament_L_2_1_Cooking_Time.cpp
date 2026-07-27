#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    long long int st = INT_MAX,et = INT_MIN;
    while (t--)
    {
        int a,b,c;
        char x;
        long long int tme;
        cin >> a >> x >> b >> x >> c;
        
        tme = a*3600 + b*60 + c;
        if(tme < st)
            st = tme;
        cout << tme;
        cin >> a >> x >> b >> x >> c;
        
        tme = a*3600 + b*60 + c;
        if(tme > et)
            st = tme;
        cout << tme;
    }
    // cout << et-st << endl;

    
    return 0;
}