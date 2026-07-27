#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    if (s[0] != 'a')
    {
        cout << "a" << endl;
    }
    else
    {
        bool flag = true;
        // cout << n << endl;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            char c2 = s[i] + 1;
            if(c == 'z')
                break;
            if (s[i + 1] != c)
            {
                if (s[i + 1] != c2)
                {

                    cout << c2 << endl;
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "None" << endl;
    }

    return 0;
}