#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n+1);
        int fx =1;

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];

            if(p[i] == i)
                fx++;
        }
        int ans = fx;

        for (int i = 0; i < count; i++)
        {
            /* code */
        }
        
    }
    
    return 0;
}