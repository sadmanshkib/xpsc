#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int sar = 0;
    int dim = 0;
    deque<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a.front() > a.back())
            {
                sar += a.front();
                a.pop_front();
            }
            else
            {
                sar += a.back();
                a.pop_back();
            }
        }
        else
        {
            if (a.front() > a.back())
            {
                dim += a.front();
                a.pop_front();
            }
            else
            {
                dim += a.back();
                a.pop_back();
            }
        }
    }

    cout << sar << " " << dim << endl;
    return 0;
}