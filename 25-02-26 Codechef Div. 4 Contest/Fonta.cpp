#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    // cout << s.substr(2) << endl;
    if(s.substr(2) == "nta")
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}