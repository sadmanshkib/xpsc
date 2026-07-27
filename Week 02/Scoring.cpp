#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;

        int fri = (p.second - p.first) / 2 + p.first;
        cout << fri << " " << p.second - fri << endl;
    }

    return 0;
}