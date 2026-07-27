#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // for(int x : s)
    // {
    //     cout << x <<  ' ';
    // }

    // cout << *s.begin();
    // auto it = s.end();
    // it--;
    // it--;
    // it--;
    // cout << *it;
    // auto it = --s.end();
    // cout << *it;

    // cout << *--s.end();

    // s.erase(8);
    // if(s.find(8) != s.end())
    // cout << *s.find(8) << endl;



    // cout << s.size() << endl;

    // s.clear();
    cout << *s.lower_bound(1) << endl;
    cout << *s.upper_bound(1) << endl;

    s.erase(5);



    for(int x : s)
    {
        cout << x <<  ' ';
    }





    
    return 0;
}