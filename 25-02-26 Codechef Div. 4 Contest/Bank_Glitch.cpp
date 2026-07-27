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
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        int sum = b;
        sum += (a/x)*y;
        sum += a%x;
        cout << sum << endl;
    }
    
    return 0;
}