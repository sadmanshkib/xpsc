#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int total = 0;

    if (c < a)
        cout << total << endl;
    else
    {
        for (int i = a; i <= c; i = i+a)
        {
            total = total + b;
        }
        cout << total << endl;
    }

    return 0;
}