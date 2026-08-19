#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin >> l >> r;
    
    bool have = false;

    if( l == r && l%2 == 0)
        have = true;

    while (l < r)
    {
        if(have)
            break;
        if(l%2==0)
            have = true;
        l++;
    }
    

    if(have)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}