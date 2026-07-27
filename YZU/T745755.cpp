#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> mark;
        int mxval;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mxval = v[i]; 
        }
        vector<int> sv;
        vector<int> bv;

        vector<bool> bflag(mxval+1, false);
        vector<bool> sflag(mxval+1, false);

        // sv[0] = v[0];
        // bv[0] = v[0];
        int ind = 0;
        int val=0;
        for (int i = 0; i < n; i++)
        {
            int x = v[i];
           
            if (bflag[x] == false)
            {
                bv.push_back(x);
                bflag[x] = true;
                val=1;
            }
            else
            {
                int p = x-val;
                while (bflag[p] != false)
                {
                    p--;
                }
                val++;
                bv.push_back(p);
                bflag[p] = true;
            }

            if (sflag[x] == false)
            {
                sv.push_back(x);
                sflag[x] = true;
            }
            else
            {
                while (sflag[ind + 1] != false)
                {
                    ind++;
                    // cout << ind << endl;
                }

                sv.push_back(ind + 1);
                sflag[ind + 1] = true;
            }
        }

        // for(bool x : bflag)
        //     cout << x << " ";

        for (int x : sv)
            cout << x << " ";
        cout << endl;
        for (int x : bv)
            cout << x << " ";
        cout << endl;


    }

    return 0;
}