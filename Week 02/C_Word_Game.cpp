#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)     
    {
        map<string,int> mp;
        int n;
        cin >> n;
        vector<string> a;
        vector<string> b;
        vector<string> c;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            a.push_back(s);
            if(mp.find(s) != mp.end())
            {
                mp[s]++;
            }
            else
                mp[s] = 1;
        }
        
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            b.push_back(s);
            if(mp.find(s) != mp.end())
            {
                mp[s]++;
            }
            else
                mp[s] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            c.push_back(s);
            if(mp.find(s) != mp.end())
            {
                mp[s]++;
            }
            else
                mp[s] = 1;
        }

        int sa=0, sb=0, sc=0;
        for(auto s : a)
            {
                if(mp[s] == 1)
                    sa += 3;
                if(mp[s] == 2)
                    sa += 1;
            }
        for(auto s : b)
            {
                if(mp[s] == 1)
                    sb += 3;
                if(mp[s] == 2)
                    sb += 1;
            }
        for(auto s : c)
            {
                if(mp[s] == 1)
                    sc += 3;
                if(mp[s] == 2)
                    sc += 1;
            }

        cout << sa << " " << sb << " " << sc << endl;
        // for(auto [key,val] : mp)
        // {
            
        //     cout << key << " -> " << val << endl;
        // }
        
    }
    
    return 0;
}

























// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<string> a;
//         vector<string> b;
//         vector<string> c;
//         vector<pair<string,int>> t;
//         for (int i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//             a.push_back(s);
//             bool have = false;
//             for (int i = 0; i < t.size(); i++)
//             {
//                 if(s == t[i].first)
//                     {
//                         t[i].second++;
//                         have = true;
//                     }
//             }
//             if(!have)
//                {
//                 pair<string,int> p = {s,1};
//                  t.push_back(p);
//                }
            
//         }
//         for (int i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//             b.push_back(s);
//             bool have = false;
//             for (int i = 0; i < t.size(); i++)
//             {
//                 if(s == t[i].first)
//                     {
//                         t[i].second++;
//                         have = true;
//                     }
//             }
//             if(!have)
//                {
//                 pair<string,int> p = {s,1};
//                  t.push_back(p);
//                }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//             c.push_back(s);
//             bool have = false;
//             for (int i = 0; i < t.size(); i++)
//             {
//                 if(s == t[i].first)
//                     {
//                         t[i].second++;
//                         have = true;
//                     }
//             }
//             if(!have)
//                {
//                 pair<string,int> p = {s,1};
//                  t.push_back(p);
//                }
//         }


//         // for (int i = 0; i < t.size(); i++)
//         // {
//         //     cout << t[i].first << " " << t[i].second << endl;
//         // }
        
//         // // for(string s: t)
//         // //     cout << s << " ";


//         int sa = 0, sb = 0, sc = 0;
        
//         for (int i = 0; i < t.size(); i++)
//         {
//             string s = t[i].first;
//             int cnt = t[i].second;
//             for(string x : a)
//             {
//                 if(x == s)
//                 {
//                     if(cnt == 1)
//                         sa += 3;
//                     if(cnt == 2)
//                         sa += 1;
//                 }
//             }
//             for(string x : b)
//             {
//                 if(x == s)
//                 {
//                     if(cnt == 1)
//                         sb += 3;
//                     if(cnt == 2)
//                         sb += 1;
//                 }
//             }
//             for(string x : c)
//             {
//                 if(x == s)
//                 {
//                     if(cnt == 1)
//                         sc += 3;
//                     if(cnt == 2)
//                         sc += 1;
//                 }
//             }

//         }
        

//         cout << sa << " " << sb << " " << sc << endl;
//     }

//     return 0;
// }