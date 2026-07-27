#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin >> n >> s;
        int t1 = s/n;
        int t2 = s%n;
        int sum = 1;
        if(t1!=6)
            sum = n*6;
        else
            sum = n*5;
        
        if(t1 == 5)
            {
                for(int i = 0; i<t2 ;i++)
                {
                    sum-=1;
                }
            }
        cout << sum << endl;
    }
    return 0;
}