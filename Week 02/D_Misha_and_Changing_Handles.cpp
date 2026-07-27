#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<string,string>> v;
    for (int i = 0; i < n; i++)
    {
        pair<string,string> p;
        cin >> p.first >> p.second;
        if(v.size()== 0)
            v.push_back(p);
        else
            {
                bool have = false;
                for (int i = 0; i < v.size(); i++)
                {
                    if(v[i].second == p.first)
                        {
                            v[i].second = p.second;
                            have = true;
                            
                            break;
                        }
                    
                }
                if(!have)
                    v.push_back(p);
                
            }

    }
    cout << v.size() << endl;
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    
    
    return 0;
}