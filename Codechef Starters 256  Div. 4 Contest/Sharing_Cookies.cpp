#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int m = a+b;
    if(m%2 == 0)
        cout << m/2 - b << endl;
    else
        cout << -1 << endl;
    return 0;
}