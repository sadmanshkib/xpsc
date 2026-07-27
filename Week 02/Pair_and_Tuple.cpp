#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<string,int> p = make_pair("karim",03);
    // pair<string,int> p = {"rahim", 99};

    // cout << p.first << " " << p.second << endl;
    // auto[name, rool] = p;
    // cout << name << " " << rool << endl;

    int n;
    cin >> n;
    // pair<string,int> p[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> p[i].first >> p[i].second;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << p[i].first << " " << p[i].second << endl;
    // }

    // tuple<int, string, int> t = {41, "sadman", 2001};

    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

    pair<string,pair<int,int>> p = {"sadman", {1,41}};

    cout << p.first << " " << p.second.first << " " << p.second.second << endl; 
    string name = p.first;
    int no = p.second.first;
    int id = p.second.second;

    cout << name << " " << no << " " << " " << id << endl;


    return 0;
}