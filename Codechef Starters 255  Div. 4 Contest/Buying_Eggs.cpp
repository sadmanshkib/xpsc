#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,f;
    cin  >> x >> y >>f;
    int a = x*12;
    int b = (y*12) + f;

    cout << min(a,b) << endl;
    return 0;
}