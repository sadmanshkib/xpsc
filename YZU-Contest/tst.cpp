#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    const int num = 1000000;
    vector<int> happy(n + 1, 0);
    vector<int> cv(num + 1, 0);

    cv[0] = n;
    int dv = 1;

    for (int i = 0; i < q; i++) { 
        int a, b;
        cin >> a >> b;

        int ov = happy[a];
        int nv = ov + b;

        cv[ov]--;
        if (cv[ov] == 0) {
            dv--;
        }

        if (cv[nv] == 0) {
            dv++;
        }
        cv[nv]++;

        happy[a] = nv;
        cout << dv << '\n';
    }

    return 0;
}