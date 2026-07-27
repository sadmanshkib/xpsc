#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int,int> mp;

    mp.insert({10,99});
    mp[20] = 66;
    mp[30] = 69;
    mp[40] = 70;
    mp[45] = 79;

    // cout << mp[10] << endl;
    // cout << mp[20] << endl;
    // cout << mp[10] << endl;

    // for(auto [no,val] : mp)
    // {
    //     cout << no << " -> " << val << endl;
    // }

    mp.erase(20);

    for(auto it : mp)
    {
        int no = it.first ;
        int val = it.second;
        cout << no << " -> " << val << endl;
    }




    return 0;
}