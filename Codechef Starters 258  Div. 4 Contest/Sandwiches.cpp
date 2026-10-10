#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,h,c;
    cin >> b >> h >> c;
    int i = 0;
    while (b>1&&(h||c))
    {
        b-=2;
        if(h)
        h--;
        else
        c--;
        i++;
    }
    cout << i << endl;
    return 0;
}