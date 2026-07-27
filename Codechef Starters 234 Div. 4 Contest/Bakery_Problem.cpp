#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    int bsum,sum;
    bsum = n*60 + k;
    sum = n*100;
    if(sum > bsum)
        cout << bsum << endl;
    else
        cout << sum << endl;
    return 0;
}