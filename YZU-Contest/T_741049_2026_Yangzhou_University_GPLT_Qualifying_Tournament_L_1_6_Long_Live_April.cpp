#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> v(n, 0);
    

    while (q--)
    {

        int a, b;
        cin >> a >> b;
        v[a - 1] = b;
        map<int, int> m;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }

        // cout << endl;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            m[x] = 1;
        }
        cout << m.size()  << endl;
    }

    // for(int x : ar)
    //     cout << x << endl;

    return 0;
}