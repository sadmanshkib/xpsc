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
        int n;
        cin >> n;
        set<int> pos,neg;
        int psum,nsum;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x>= 0)
                {
                    pos.insert(x);
                    psum = psum + x;
                }
            else
                {
                    neg.insert(x);
                    nsum = nsum + x;
                    
                }
        }

        for(auto x : neg)
            cout << x << endl;

        // if(pos.size() == 0)
        //     cout << 0 << endl;
        // else if (neg.size() == 0)
        //     cout << pos.size() << endl;
        // else
        //     {
        //         auto posit = pos.end();
        //         auto negit = neg.begin();
        //         --posit;
        //         --negit;
        //         cout << *posit << " " << *negit;
                
        //         cout << " not yet" << endl;

        //         // if(psum != nsum)
        //         // {
        //         //     if(psum > nsum)
        //         //     {
        //         //         while (psum != nsum)
        //         //         {
        //         //             psum = psum - *pos.rbegin();
        //         //             pos.erase(*pos.rbegin());
        //         //         }
        //         //         cout << pos.size() + neg.size();
        //         //     }
        //         // } 
        //     }

        
    }
    
    return 0;
}