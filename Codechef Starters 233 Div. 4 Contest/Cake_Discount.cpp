#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int sum =  n*100;
    if(n >= 5)
        cout << sum * 0.85 << endl;
    else
        cout << sum << endl;
    return 0;
}