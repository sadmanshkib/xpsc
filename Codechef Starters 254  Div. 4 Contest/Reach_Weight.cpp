#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ans =0;
        cin >> n;
        // cout << ans << endl;
        ans += (n/2)*30;
        // cout << ans << endl;
        ans += (n%2)*20;

        cout << ans << endl;
    }
    
    return 0;
}