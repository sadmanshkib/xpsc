#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;


    while (true)
    {
        if(c >= a && c <= b)
            break;
        c = c*2;
        if(c > b)
            break;
    }
    

    if( c <= b && c >= a)
        cout << c << endl;
    else
        cout << "-1" << endl;
    
    
    return 0;
}