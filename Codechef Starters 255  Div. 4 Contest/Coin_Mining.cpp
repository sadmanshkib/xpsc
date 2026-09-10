#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;

        cin >> x >> y;
        int day = 1;
        int m = y*day;
        while (x<m)
        {
            day++;
            m = y*day*day;
            x +=x;
        }
        cout << day << endl;
    }
    
    return 0;
}