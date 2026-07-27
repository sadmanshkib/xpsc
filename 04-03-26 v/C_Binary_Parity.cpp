#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        while (n != 0)
        {
            int x = n%2;
            v.push_back(x);
            n = n/2;

        }
        int sum =0;
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i] == 1)
                sum++;
        }

        if(sum%2 == 0)
            cout << "EVEN" << endl;
        else
            cout << "ODD" << endl;
        
        
    }
    
    return 0;
}