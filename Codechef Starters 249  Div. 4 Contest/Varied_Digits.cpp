#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n%10 != n/10)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}