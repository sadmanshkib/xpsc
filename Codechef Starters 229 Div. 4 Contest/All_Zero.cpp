#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        while (a >= 1 
        )
        {
            a--;
            b-=2;
        }
        while (b>= 1 && c >= 3)
        {
            b--;
            c-=3;
        }
        while (a >= 1 
        )
        {
            a--;
            b-=2;
        }
        if(a==b && b==c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        
    }
    
    
    return 0;
}