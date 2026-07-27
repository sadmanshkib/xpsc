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
        double n,m;
        
        cin >> n >> m;
        double x = n - m;
        cout << x*(n+m+1)/2 << endl;
        // cout << x << endl;
    }
    
    return 0;
}