#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<pair<int,int>> s;
    set<pair<int,int>> s2;
    vector<int> v;
    int no= 1;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if(x == 1)
        {
            int money;
            cin >> money;
            s.insert({no,money});
            s2.insert({money,-no});
            no++;
        }
        else if(x == 2)
        {
            int pos = s.begin()->first,money = s.begin()->second;
            v.push_back(pos);
            s.erase(s.begin());
            s2.erase({money,-pos});

        }

        else
        {
            int pos = s2.rbegin()->second, money = s2.rbegin()->first;
            v.push_back(-pos);
            s2.erase(--s2.end());
            s.erase({-pos,money});
        }
        

    }
    for(auto z : v)
        cout << z << " " ;
    cout << endl;

    
    // for(auto x : s)
    //     {
    //         pair<int,int> p = x;
    //         cout << p.first << " " << p.second << " ";
    //     }
    // cout << endl;

    // for(auto x : s2)
    //     {
    //         pair<int,int> p = x;
    //         cout << p.first << "," << p.second << " ";
    //     }
    // cout << n << endl;
    
    return 0;
}