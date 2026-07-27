#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    cin >> a >> b;
    int ind = 0;
    for (int i = 0; i < b.size(); i++)
    {
        if(a[ind] == b[i])
            {
                cout << i+1 ;
                if(ind < a.size()-1)
                {
                    cout << " ";
                }
                ind++;
            }
    }
    
    return 0;
}