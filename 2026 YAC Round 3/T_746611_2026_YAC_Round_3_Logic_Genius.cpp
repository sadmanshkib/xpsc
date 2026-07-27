#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    string x;
    cin >> n >> x >> m >> k;
    if( k == n)
        cout << "zhao le dian li mei you " << x << endl;
    else if(k == m)
        cout << "zhao dao le mai " << x << " de" << endl;
    else
        cout <<  "ni mai de zhe dou shi sha" << endl;

    return 0;
}